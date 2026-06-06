#include <ap_int.h>

void vector_add(float* A, float* B, float* C, int n) {
    #pragma HLS INTERFACE m_axi port=A bundle=gmem
    #pragma HLS INTERFACE m_axi port=B bundle=gmem
    #pragma HLS INTERFACE m_axi port=C bundle=gmem
    
    for (int i = 0; i < n; i++) {
        #pragma HLS PIPELINE II=1
        C[i] = A[i] + B[i];
    }
}
