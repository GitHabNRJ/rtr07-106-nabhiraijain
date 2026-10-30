//header files
//standard headers
#include<stdio.h>

//OpenCL headers
#include<CL/opencl.h>
#include "helper_timer.h"

//global variables
const int iNumberOfArrayElements = 5;

//OpenCL Variables 
cl_platform_id oclPlatformID;                  //internally it is struct  in OPEN Platform nam ki concept uski id 
cl_device_id oclDeviceID;                      //Platform ke aandar ke device ki id 

cl_context oclContext = NULL;                       //Context mane aavasta what is the aavasta of OPENCL internally                          
cl_command_queue oclCommandQueue = NULL;                  // OPENCL telling whatever u want me to do send me in queue COMMAND QUEUE . It is nvidia too but managed internally by Nvidia OpenCl is Open u hae to do yourself

cl_program oclProgram;             //Kernel ko Program me dalke bhejna hai 
cl_kernel oclKernel;                //OPENCL variable Graphic card pe chalne wala program 
//Graphics card Graphic ka code shader ka code shader , compute ka code Kernel 

//Host variables 
float* hostInput1 = NULL;     //hostInput1 array ko innitialize kiya hai NULL se .
float* hostInput2 = NULL;
float* hostOutput = NULL;

//DEVICE Variable  U can also declare like with CUDA type (float* ) but OEPNCL recommends these are my memory objects so please tell me these are my memory objects explicitly . It is alredy in Memory so not * or pointer . cl_mem already pointer 
  //I will give u correct code if you give me correct type 

cl_mem deviceInput1 = NULL;
cl_mem deviceInput2 = NULL;
cl_mem deviceOutput = NULL;



const char* oclSourcecode =
"__kernel void vecAddGPU(__global float *in1, __global float *in2, __global float *out,int len)"\
"{" \
"int i=get_global_id(0);"\
"if(i<len)"\
"{"\
"out[i]=in1[i]+in2[i];"\
"}"\
"}";

//OpenCL kernel                                     //Placed Globally for similar mapping with HelloCUDA Otherwise we can put locally too in mail 


//const char* oclSourcecode =                                                                                        //Multiple lines string to put tread as single string Syntax enclosed every string in  double coute and end with escape sequence .
//"__kernel void vecAddGPU(__global float *in1, __global float *in2, __global float *out,int len)"\               // __global these are device memory variable for device memory variable suffix __global 
//"{" \
//"int i=get_global_id(0);"\                                                                                       //For x=0 ,y=1 ,z=2
//"if(i<len)"\
//"{"\
//"out[i]=in1[i]+in2[i];"\
//"}"\
//"}";                                                       //In last string end not with back slash but with semicolon 

//entry-point function
int main(void)
{
	//function declarations
	void cleanup(void);

	//variable declarations 
	int size = iNumberOfArrayElements * sizeof(float);
	cl_int result = CL_SUCCESS;

	//code
	//host memory alllocation
	hostInput1 = (float*)malloc(size);

	//Error checking 
	if (hostInput1 == NULL)
	{
		printf("Host Memory allocation is failed for hostInput1 array.\n");
		cleanup();

		exit(EXIT_FAILURE);

	}
	hostInput2 = (float*)malloc(size);
	if (hostInput2 == NULL)
	{
		printf("Host Memory allocation is failed for hostInput2 array.\n");
		cleanup();
		exit(EXIT_FAILURE);

	}

	hostOutput = (float*)malloc(size);
	if (hostOutput == NULL)
	{
		printf("Host Memory allocation is failed for hostOutput array.\n");
		cleanup();
		exit(EXIT_FAILURE);

	}

	//filling values into host arrays
	hostInput1[0] = 101.0;
	hostInput1[1] = 102.0;
	hostInput1[2] = 103.0;
	hostInput1[3] = 104.0;
	hostInput1[4] = 105.0;

	hostInput2[0] = 201.0;
	hostInput2[1] = 202.0;
	hostInput2[2] = 203.0;
	hostInput2[3] = 204.0;
	hostInput2[4] = 205.0;

	//get OpenCL supporing platform's ID
	result = clGetPlatformIDs(1, &oclPlatformID, NULL);                                      //clGetPlatformIDs give multiple id's with 1 telling give me only 1 ID , 3rd- How many platform already exisitng we don't need it so NULL 

	if (result != CL_SUCCESS)   //Error BLOCK
	{
		printf("clGetPlatformIDs() Failed:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}
	//get OpenCL supporting CPU device's ID
	result = clGetDeviceIDs(oclPlatformID, CL_DEVICE_TYPE_GPU, 1, &oclDeviceID, NULL);                 //1st which platform , 2nd- kitne devices ki , 
	if (result != CL_SUCCESS)
	{
		printf("clGetDeviceIDs() Failed:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}
	//create OpenCL compute context
	oclContext = clCreateContext(NULL, 1, &oclDeviceID, NULL, NULL, &result);                       //
	if (result != CL_SUCCESS)
	{
		printf("clCreateContext() Failed:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}
	//create command queue
	oclCommandQueue = clCreateCommandQueueWithProperties(oclContext, oclDeviceID, 0, &result);                                    //Depreciated from OPENCL 2.0
	if (result != CL_SUCCESS)
	{
		printf("clCreateCommandQueue() Failed :%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}
	//create OpenCL program from .cl for our Kernel 
	oclProgram = clCreateProgramWithSource(oclContext, 1, (const char**)&oclSourcecode, NULL, &result);              //2nd parameter how many kernel=1  ;4th-
	if (result != CL_SUCCESS)
	{
		printf("clCreateProgramWithSource() Failed:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}

	//build OpenCL program
	result = clBuildProgram(oclProgram, 0, NULL, NULL, NULL, NULL);                   //4th-BUILD Options  5th-callback function , 6th-NULL
	if (result != CL_SUCCESS)
	{
		size_t len;
		char buffer[2048];
		clGetProgramBuildInfo(oclProgram, oclDeviceID, CL_PROGRAM_BUILD_LOG, sizeof(buffer), buffer, &len);                  // On failure error nikalne ke liye
		printf("Program Build Log :%s\n", buffer);
		printf("clBuildProgram() Failed:%d \n", result);

		cleanup();

		exit(EXIT_FAILURE);

	}
	//create OpenCL kernel by passing kernel function name that we used in .cl file
	oclKernel = clCreateKernel(oclProgram, "vecAddGPU", &result);
	cleanup();
	exit(EXIT_FAILURE);


	//device memory allocation
	deviceInput1 = clCreateBuffer(oclContext, CL_MEM_READ_ONLY, size, NULL, &result);      //2nd Output you will use for Read or 
	if (result != CL_SUCCESS)
	{
		printf("clCreateBufer() Failed For 1st Input Array :%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}
	deviceInput2 = clCreateBuffer(oclContext, CL_MEM_READ_ONLY, size, NULL, &result);
	if (result != CL_SUCCESS)
	{
		printf("clCreateBuffer() Failed For 2nd Input Array: %d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}
	deviceOutput = clCreateBuffer(oclContext, CL_MEM_WRITE_ONLY, size, NULL, &result);
	if (result != CL_SUCCESS)
	{
		printf("clCreateBuffer() Failed For Output Array : %d \n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}
	//set 0 based 0th argument i:e . deviceInput1
	result = clSetKernelArg(oclKernel, 0, sizeof(cl_mem), (void*)&deviceInput1);
	if (result != CL_SUCCESS)
	{
		printf("clSetKernelArg() Failed for 1st Argument:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}

	//set 0 baed 1st argument i:e deviceInput2
	result = clSetKernelArg(oclKernel, 1, sizeof(cl_mem), (void*)&deviceInput2);
	if (result != CL_SUCCESS)
	{
		printf("clSetKernelArg() Failed For 2nd Argument : %d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}

	//set 0 based 2nd argument i:e deviceOutput
	result = clSetKernelArg(oclKernel, 2, sizeof(cl_mem), (void*)&deviceOutput);
	if (result != CL_SUCCESS)
	{
		printf("clSetKernelArg() Failed For 3rd Argument : %d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}

	//set 0 based 3rd argument i:e len
	result = clSetKernelArg(oclKernel, 3, sizeof(cl_int), (void*)&iNumberOfArrayElements);
	if (result != CL_SUCCESS)
	{
		printf("clSetKernelArg() Failed For 4th Argument : %d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}
	//write above 'input' device buffer to device memory
	result = clEnqueueWriteBuffer(oclCommandQueue, deviceInput1, CL_FALSE, 0, size, hostInput1, 0, NULL, NULL);
	if (result != CL_SUCCESS)
	{
		printf("clEnqueueWriteBuffer() Failed For 1st Input Device Buffer:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}
	result = clEnqueueWriteBuffer(oclCommandQueue, deviceInput2, CL_FALSE, 0, size, hostInput2, 0, NULL, NULL);
	if (result != CL_SUCCESS)
	{
		printf("clEnqueueWriteBuffer() Failed For 2nd Input Device Buffer:%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}
	//kernel configuration
	size_t global_size = 5;   //1-D 5 element array operation
	result = clEnqueueNDRangeKernel(oclCommandQueue, oclKernel, 1, NULL, &global_size, NULL, 0, NULL, NULL);        //N nTIMES WALA D-Dimensions ND 1D,2D or 3D .
	if (result != CL_SUCCESS)
	{
		printf("clEnqueueNDRangeKernel() Failed: %d\n", result);
		cleanup();
		exit(EXIT_FAILURE);

	}

	//finish OpenCL command queue
	clFinish(oclCommandQueue);

	//read back result from the device (i.e from device Output) into cpu variable (i.e hostOutput)
	result = clEnqueueReadBuffer(oclCommandQueue, deviceOutput, CL_TRUE, 0, size, hostOutput, 0, NULL, NULL);
	if (result != CL_SUCCESS)
	{
		printf("clEnqueueReadBuffer() Failed :%d\n", result);
		cleanup();
		exit(EXIT_FAILURE);
	}

	//display results
	int i;
	for (i = 0; i < iNumberOfArrayElements; i++)
	{
		printf("%f+%f=%f\n", hostInput1[i], hostInput2[i], hostOutput[i]);
	}
	//cleanup
	cleanup();
	return(0);

}

void cleanup(void)
{
	//code
	if (deviceOutput)
	{
		clReleaseMemObject(deviceOutput);
		deviceOutput = NULL;
	}
	if (deviceInput2)
	{
		clReleaseMemObject(deviceInput2);
		deviceInput2 = NULL;
	}
	if (deviceInput1)
	{
		clReleaseMemObject(deviceInput1);
		deviceInput1 = NULL;
	}
	if (oclKernel)
	{
		clReleaseKernel(oclKernel);
		oclKernel = NULL;
	}
	if (oclProgram)
	{
		clReleaseProgram(oclProgram);
		oclProgram = NULL;
	}
	if (oclCommandQueue)
	{
		clReleaseCommandQueue(oclCommandQueue);
		oclCommandQueue = NULL;
	}
	if (oclContext)
	{
		clReleaseContext(oclContext);
		oclContext = NULL;
	}
	if (hostOutput)
	{
		free(hostOutput);
		hostOutput = NULL;
	}
	if (hostInput2)
	{
		free(hostInput2);
		hostInput2 = NULL;
	}
	if (hostInput1)
	{
		free(hostInput1);
		hostInput1 = NULL;
	}


}
