#include <stdio.h>
#include <string.h>

/*
 * ���飺
 * 1��������
 * 2����ά����
 */
/*int main() {

    //����һ������  ���10������
    int arr[10] = {1,2,3}; //����ȫ��ʼ����Ĭ��ֵ0
    char arr2[10] = {'q','b',98}; //Ĭ��0

    char arr3[]  = "ab"; //ok ����Ԫ��  ab\0
    char arr4[]  = {'a','b','c'}; //ok ����Ԫ��  abc û��\0

    for(int i =0; i< strlen(arr3);i++)
    {
        printf("%c\n",arr3[i]);
    }


    //sizeof()��������ռ�ռ�Ĵ�С  3*1 = 3
    printf("%d\n",sizeof(arr3)); //3 ����ĳ���
    printf("%d\n",sizeof(arr4)); //3 ����Ԫ��  abc
    //strlen(); �����ַ����ĳ��� ����\0֮ǰ������
    printf("%d\n",strlen(arr3)); //2 �ַ��ĳ���
    printf("%d\n",strlen(arr4)); //���ֵ

//    int n = 10;
//    char arr1[n];  err����ġ����б�����һ������

//1��strlen()��sizeof();ûʲô����
//2: strlen()���ַ�������-ֻ������ַ�������-�⺯��-����string.h
//3��sizeof() ������������顣���͵Ĵ�С-��λ���ֽ�-������





    return 0;
}*/
/*
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

        //�������ڴ��� ��������ŵ�
        printf("&arr[%d] = %p\n",i,&arr[i]); //%p ��ӡ��ַ
    }


}*/

//��ά����
int main() {

    //Ĭ�ϳ�ʼ�� 0
    int arr[3][4] = {1, 2, 3, 4};  //��������
    int arr2[3][4] = {{1, 2, 3}, 4};

    //�� ����ʡ��  ���в���ʡ��
    int arr3[][3] = {{1, 2, 3}, {5, 6, 7, 8}};


    //��ά���� ��Ȼ��ͨ���±���з��ʵ�
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
//            printf("%d ",arr2[i][j]);
            printf("&arr[%d][%d]=%p  ",i,j,&arr2[i][j]);
        }
        printf("\n");
    }

}
