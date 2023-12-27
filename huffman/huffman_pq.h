/******************************************************************************************
 * ֧��Huffman��������ݽṹ
 ******************************************************************************************
 * ����ͳһ�Ľӿڣ�ΪHuffman_PQ_ComplHeap��Huffman_PQ_LeftHeap����
 * ����֮ǰ����ͨ���ڶ�Ӧ�Ĺ���������DSA_PQ_ComplHeap��DSA_PQ_LeftHeapѡ��
 ******************************************************************************************/
#include <iostream>
using namespace std;

//Huffman��
#include "Huffman/HuffChar.h" //����Huffman�������ַ�
#include "Huffman/HuffTree.h" //����Huffman��
#include "Huffman/HuffTable.h" //����Huffman�����
#include "Huffman/HuffCode.h" //����HuffCode�����Ʊ���

// Huffmanɭ��
#if defined(DSA_PQ_LIST)
#include "Huffman_PQ_List/Huffman_Forest_PQ_List.h"
#elif defined(DSA_PQ_COMPLHEAP)
#include "Huffman_PQ_ComplHeap/Huffman_Forest_PQ_ComplHeap.h"
#elif defined(DSA_PQ_LEFTHEAP)
#include "Huffman_PQ_LeftHeap/Huffman_Forest_PQ_LeftHeap.h"
#else //���ط�����ֱ����Listʵ�ֵ�Huffmanɭ��
#include "Huffman/Huffman_Forest_List.h"
#endif




