#include <stdio.h>
#include <string.h>

/*
 * 数组：
 * 1：简单数组
 * 2：二维数组
 */
/*int main() {

    //创建一个数组  存放10个整形
    int arr[10] = {1,2,3}; //不完全初始化，默认值0
    char arr2[10] = {'q','b',98}; //默认0

    char arr3[]  = "ab"; //ok 三个元素  ab\0
    char arr4[]  = {'a','b','c'}; //ok 三个元素  abc 没有\0

    for(int i =0; i< strlen(arr3);i++)
    {
        printf("%c\n",arr3[i]);
    }


    //sizeof()；计算所占空间的大小  3*1 = 3
    printf("%d\n",sizeof(arr3)); //3 数组的长度
    printf("%d\n",sizeof(arr4)); //3 三个元素  abc
    //strlen(); 计算字符串的长度 计算\0之前的内容
    printf("%d\n",strlen(arr3)); //2 字符的长度
    printf("%d\n",strlen(arr4)); //随机值

//    int n = 10;
//    char arr1[n];  err数组的【】中必须是一个常量

//1：strlen()和sizeof();没什么关联
//2: strlen()求字符串长度-只能针对字符串长度-库函数-引入string.h
//3：sizeof() 计算变量。数组。类型的大小-单位是字节-操作符





    return 0;
}*/
/*
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

        //数组在内存中 是连续存放的
        printf("&arr[%d] = %p\n",i,&arr[i]); //%p 打印地址
    }


}*/

//二维数组
int main() {

    //默认初始化 0
    int arr[3][4] = {1, 2, 3, 4};  //三行四列
    int arr2[3][4] = {{1, 2, 3}, 4};

    //行 可以省略  ；列不可省略
    int arr3[][3] = {{1, 2, 3}, {5, 6, 7, 8}};


    //二维数组 依然是通过下标进行访问的
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
//            printf("%d ",arr2[i][j]);
            printf("&arr[%d][%d]=%p  ",i,j,&arr2[i][j]);
        }
        printf("\n");
    }

}
