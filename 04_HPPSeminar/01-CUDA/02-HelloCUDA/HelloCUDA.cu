//header files
//standard headers
#include<stdio.h>
#include<stdlib.h>

//cuda headers
#include<cuda.h>

//global variables
const int iNumberOfArrayElements = 5;    //array mai kitne element hone wale hein . Here array declaration is not suscrpit based array , Here it is pointer based array declaration .
                                         //Array in HPP are not subscript based.HPP technology hardly & harshly linked to Pointers.We wil declare in pointer based array while we innitialize in subscript based array .

// Device Host CPU 3 arrays 
float* hostInput1 = NULL;     //host referred as CPU so jo CPU paar variable hai Input1 usko hane NULL se innitialize kiya hai.
float* hostInput2 = NULL;
float* hostOutput = NULL;     //host Output , it will store the host Output .


//Device GPU 3 arrays 

float* deviceInput1 = NULL;    
float* deviceInput2 = NULL;
float* deviceOutput = NULL; 

//CUDA Kernel
//__global__ is a specificier indicates  write/call-->HOST   Execute-->Device
__global__  void vecAddGPU(float* in1, float* in2, float* out, int len)
{

//code
	int i =  (blockIdx.x * blockDim.x )  + threadIdx.x;                          //Equation to calculate the Thread Global id in X-direction
	if (i < len)                                                      //If i got from above equation is less than the array lenght come inside the if block and perform the addition operation
	{
		out[i] = in1[i] + in2[i];
	}
}

//entry -poin function
int main(void)
{

	//function declarations
	void cleanup(void);

	//variable declarations  (size variable to calculate the memory of array and give in malloc directly .

	int size = iNumberOfArrayElements * sizeof(float);
	cudaError_t result = cudaSuccess;

	//code
	//host memory allocation
	hostInput1 = (float*)malloc(size);
	if (hostInput1 == NULL)
	{

		printf("Host Memory Allocation is failed for hostInput1 array.\n");
		cleanup();   // Memory allocation failed so no need to go further so we will clean all memory and exit .
		exit(EXIT_FAILURE);   //exit is not porrable unique on all OS , means parameter passed to exit meaning is not same on all the O.S . (Windows/Linux)1-FAILURE , OpenVMS-Success.
		//For unique meaning we passed same meaning EXIT_FAILURE.
	}

	hostInput2 = (float*)malloc(size);
	if (hostInput2 == NULL)
	{

		printf("Host Memory Allocatio is failed ofr hostInput2 array.\n");
		cleanup();
		exit(EXIT_FAILURE);

	}
	hostOutput = (float*)malloc(size);
	if (hostOutput == NULL)
	{
		printf("Host Memory allocatio is failed for hostOutput array.\n");
		cleanup();
		exit(EXIT_FAILURE);
	}
	//filling values into host arrays with piece meal innitialization 
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

	//device-GPU  memory allocation

	result = cudaMalloc((void**)&deviceInput1, size);    //calling cuda Malloc to allocate the memory to GPU devices , 
	//Malloc gives memory on RAM whereas cudaMalloc gives memory on VRAM.
 //(void **) Device GPU 3 arrays  float* deviceInput1 = NULL; Declaraion is on Host so 1(*) for it but with cudaMalloc it will get memory on VRAM 
  //Here float while inputting take it as Generic Pointer (void *)
  // &- we are talking with address
  //How much memory to allocate on GPU equivalent to size 



	if (result != cudaSuccess)
	{
		printf("Device Memory allocation is failed for deviceInput1 array.\n");
		cleanup();
		exit(EXIT_FAILURE);

		// print("%s",cudaGetErrorString(result));
		// In which file we got error __FILE__
	}
	result = cudaMalloc((void**)&deviceInput2, size);

	//Errror checking 
	if (result != cudaSuccess)
	{

		printf("Device Memory allocation is failed for deviceInput2 array.\n");
		cleanup();
		exit(EXIT_FAILURE);
	}

	result = cudaMalloc((void**)&deviceOutput, size);
	if (result != cudaSuccess)
	{
		printf("Device Memory allocation is failed for deviceOutput array.\n");
		cleanup();
		exit(EXIT_FAILURE);
	}

	//COPY DATA FROM HOST ARRAYS INTO DEVICE ARRAYS  (RAM--->VRAM) 
	//Send the data from hostInput1 CPU Memory to DeviceInput1 in GPU Memory 
	//Memcyp cpy function 
	//1
	result = cudaMemcpy(deviceInput1, hostInput1, size, cudaMemcpyHostToDevice);
	if (result != cudaSuccess)
	{
		printf("Host to Device Data Copy is failed for deviceInput1 array.\n");
		cleanup();
		exit(EXIT_FAILURE);
	}
	result = cudaMemcpy(deviceInput2, hostInput2, size, cudaMemcpyHostToDevice);
	if (result != cudaSuccess)
	{
		printf("Host to Device Data Copy is failed for deviceInput2 array.\n");
		cleanup();
		exit(EXIT_FAILURE);
	}

	//CUDA Kernel Dimension configuration 
	//Step1:-Give Grid size
	//Step2:-Give Block size 

	dim3 dimGrid = dim3(iNumberOfArrayElements, 1, 1);                                //dim-->dimensions Grid-->Blocks Grid me block ki dimensions Blocks can be on X,Y,X Axis.
	dim3 dimBlock = dim3(1, 1, 1);

	//CUDA Kernel Execution Configuration Syntax
	//Calling CUDA kernel for Vector Addition
	//Syntax fxnName <<< 
	vecAddGPU << <dimGrid, dimBlock >> > (deviceInput1, deviceInput2, deviceOutput, iNumberOfArrayElements);


	//Note u can't read the GPU Memory localtion so copy to Host memory
	//copy data from device Memory array into host array 
	result = cudaMemcpy(hostOutput, deviceOutput, size, cudaMemcpyDeviceToHost);
	if (result != cudaSuccess)
	{
		printf("Device to Host Data Copy is failed for hostOutput array.\n");
		cleanup();
		exit(EXIT_FAILURE);
	}
	//vcector addition on host Memory
	for (int i = 0; i < iNumberOfArrayElements; i++)
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
			cudaFree(deviceOutput);
			deviceOutput = NULL;
		}

		if (deviceInput2)
		{
			cudaFree(deviceInput2);
			deviceInput2 = NULL;
		}


		if (deviceInput1)
		{
			cudaFree(deviceInput1);
			deviceInput1 = NULL;
		}
		
		if (hostOutput)
		{
			cudaFree(hostOutput);
			hostOutput = NULL;
		}
		if (hostInput2)
		{
			cudaFree(hostInput2);
			hostInput2 = NULL;
		}

		if (hostInput1)
		{
			cudaFree(hostInput1);
			hostInput1 = NULL;
		}
	
		
	}

