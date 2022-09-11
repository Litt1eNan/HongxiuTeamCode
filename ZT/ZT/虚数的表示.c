#include<stdio.h>
#include<stdlib.h>
typedef struct{//�������� 
	float Realpart;//ʵ������
	float Imagepart;//�������� 
}Complex;

Complex Create(float x,float y);
float Getreal(Complex C);
float Getimage(Complex C);
Complex Add(Complex C1,Complex C2);
Complex Sub(Complex C1,Complex C2);


Complex Create(float x,float y){//����һ������ 
	Complex C;//��������C 
	C.Realpart=x;
	C.Imagepart=y;
	return C;//����C 
}

float Getreal(Complex C){//��ȡʵ�� 
	return C.Realpart;
}

float Getimage(Complex C){//��ȡ�鲿 
	return C.Imagepart;
}

Complex Add(Complex C1,Complex C2){//�ӷ� 
	Complex sum;
	sum.Imagepart=C1.Imagepart+C2.Imagepart;
	sum.Realpart=C1.Realpart+C2.Realpart;
	return sum;
}

Complex Sub(Complex C1,Complex C2){//���� 
	Complex diff;
	diff.Realpart=C1.Realpart-C2.Realpart;
	diff.Imagepart=C1.Imagepart-C2.Imagepart;
	return diff;
}

int main(void){
	Complex C1,C2,sum;
	C1=Create(1,2);
	C2=Create(2,3);
	
	sum=Add(C1,C2);
	printf("%.f+%.fi",sum.Realpart,sum.Imagepart);
	return 0;
} 
