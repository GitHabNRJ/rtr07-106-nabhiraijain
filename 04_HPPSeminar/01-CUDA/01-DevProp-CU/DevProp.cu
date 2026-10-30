#include<stdio.h>
#include<cuda.h>

int main(void)
{
//function declarations
	void PrintCUDADeviceProperties(void);

	//code
	PrintCUDADeviceProperties();

}

void PrintCUDADeviceProperties(void)
{
	//code
	printf("CUDA INFORMATION:\n");
	printf("==================================================================================\n");
	cudaError_t   ret_cuda_rt;   //To catch cuda errors 
	int dev_count;    //device count

	ret_cuda_rt = cudaGetDeviceCount(&dev_count);   // cudaGetDeviceCount is cuda function &dev_count jaate huye khali jayega or aate huye bhar ke aayega.
	if (ret_cuda_rt != cudaSuccess)
	{
		printf("CUDA Runtime API Error -cudaGetDeviceCount() Failed Due to %s.\n", cudaGetErrorString(ret_cuda_rt));

	}
	else if (dev_count == 0)
	{
		printf("There Is No CUDA Supported Device on This System.\n");
		return;
	}
	else
	{
		printf("Total Number of CUDA Supporting GPU Device/Devices on This System:%d\n", dev_count);
		for (int i = 0; i < dev_count; i++)
		{
			cudaDeviceProp dev_prop;
			memset((void*)&dev_prop, 0, sizeof(cudaDeviceProp));
			int driverVersion = 0;
			int runtimeVersion = 0;

			ret_cuda_rt = cudaGetDeviceProperties(&dev_prop, i);
			if (ret_cuda_rt != cudaSuccess)
			{
				printf("%s in %s at line % d\n",cudaGetErrorString(ret_cuda_rt),__FILE__,__LINE__);
					return;
			}
			printf("\n");
			cudaDriverGetVersion(&driverVersion);
			cudaRuntimeGetVersion(&runtimeVersion);

			printf("*********CUDA DRIVER AND RUNTIME INFORMATION************\n");
			printf("========================================================\n");
			printf("CUDA Driver Version                             :%d.%d\n",(driverVersion /1000),(driverVersion % 100) / 10);
			printf("CUDA Runtime Version                            :%d.%d\n",(runtimeVersion /1000),(runtimeVersion % 100) / 10);
			printf("\n");
			printf("*********************************************************\n");
			printf("*****************GPU DEVICE GENERAL INFORMATION**********\n");
			printf("==========================================================\n");
			printf("GPU Device Number                               :%d\n",i);
			printf("GPU Device Name                                 :%s\n", dev_prop.name);
			printf("GPU Device Compute Capability                   :%d.%d\n", dev_prop.major, dev_prop.minor);
			//printf("GPU Device Clock Rate                           :%d\n", dev_prop.clockRate);
			printf("GPU Device Type                                 :");

			//Driver mainly 2 types integrated or Discreate so here as Boolean variable we re checking our GC is integrated or Discreate 
			
			if (dev_prop.integrated)
				printf("Integrated(On-Board)\n");
			else
				printf("Discreate (Card)\n");
			printf("\n");
			printf("*****************GPU DEVICE MEMORY INFORMATION***********************\n");
			printf("======================================================================\n");  
			
			//1st %f gives Tota Memory in GB , 2nd %f will memory in KB & last print number in plan so long so used llu 

			printf("GPU Device Total Memory                         :%.0f GB=%.0f MB=%llu Bytes\n", ((float)dev_prop.totalGlobalMem / 1048576.0f) / 1024.0f, 
			                                                                                        (float)dev_prop.totalGlobalMem / 1048576.0f, 
																									(unsigned long long)dev_prop.totalGlobalMem);

														

			printf("GPU Device Constant Memory                      :%lu Bytes\n", (unsigned long)dev_prop.totalConstMem);
			printf("GPU Device Shared Memory Per SMProcessor        :%lu \n", (unsigned long)dev_prop.sharedMemPerBlock);
			printf("\n");

			printf("*********GPU DEVICE MULTIPROCESSOR INFORMAION******************\n");
			printf("================================================================\n");
			printf("GPU Device Number Of SMProcessors               :%d\n", dev_prop.multiProcessorCount);
			printf("GPU Device Number Of Regisers Per SMProcessor   :%d\n", dev_prop.regsPerBlock);

			printf("\n");
			printf("**********GPU DEVICE THREAD INFORMATION**************************\n");

			//It gives GC Capcity how many threads GC can generae Per symetric Multi Processor 
			
			printf("=================================================================\n");
			printf("GPU Device Maximum Number Of Threads PerSMProcessor :%d\n", dev_prop.maxThreadsPerMultiProcessor);
			printf("GPU Device Maximum Number Of hreads Per Bloack      :%d\n", dev_prop.maxThreadsPerBlock);
			printf("GPU Device Threads In Warp                          :%d\n", dev_prop.warpSize);    
			printf("GPU Device Maximum Thread Dimensions                :(%d,%d,%d)\n", dev_prop.maxThreadsDim[0], dev_prop.maxThreadsDim[1], dev_prop.maxThreadsDim[2]);
			printf("GPU Device Maximum Grid Dimensions                  :(%d,%d,%d)\n", dev_prop.maxGridSize[0], dev_prop.maxGridSize[1], dev_prop.maxGridSize[2]);  //GridSize is analogous to Grid Dimension
			printf("\n");
			printf("******************************GPU DEVICE DRIVER INFORMATION*************************************\n");
			printf("=================================================================================================\n");
			printf("GPU Device has ECC support                          :%s\n", dev_prop.ECCEnabled ? "Enabled" : "Disabled");  //ECC is Error correction check .
#if defined(WIN32)||defined(_WIN32)||defined(WIN64)||defined(_WIN64)
			printf("GPU Device CUDA Driver Mode(TCC Or WDDM)           : %s\n", dev_prop.tccDriver ? "TCC( Tesla Compute Cluster Driver)" : "WDDM(Windows Display Driver Model)");
			//TCC-Tesla cluster computation , Tesla is Nvidia Architecture of GPU Tesla only do Complute calculations not Graphics 
#endif				
			printf("******************************************************************************************************************************************************\n");
		}
	}
}

