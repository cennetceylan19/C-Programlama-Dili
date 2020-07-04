#include<stdio.h>

int main(){
	// int deðiþkeni uygulamasý
	int a=7;
	int b=3;
	int c=2;
	printf("iki sayinin toplaminin ikye bolumu=%d",(a+b)/2);
	int islem = (a+b)/2;
	printf("\niki sayinin toplaminin ikye bulumu=%d",islem);
	int sayi1,sayi2,sayi3,ortalama;
	printf("Uc sayi giriniz:");
	scanf("%d,%d,%d",&sayi1,&sayi2,&sayi3);
	ortalama=(sayi1+sayi2+sayi3)/3;
	printf("\nGirilen sayilar=%d,%d,%d \nBusayýlarýn ortalamasi=%d",sayi1,sayi2,sayi3,ortalama);
	
	
	//Deðiþkenlerin bellekte kapladýðý alanlarý öðrenmek için kullanýlan kodlar
	int integarDegisken;
	float floatDegisken;
	double doubleDegisken;
	char charDegisken;
	printf("integar degiskenin bellekte kapladigi yer=%ld \n",sizeof(integarDegisken));
	printf("float degiskenin bellekte kapladigi yer=%ld \n",sizeof(floatDegisken));
	printf("double degiskenin bellekte kapladigi yer=%ld \n",sizeof(doubleDegisken));
	printf("char degiskenin bellekte kapladigi yer=%d",sizeof(charDegisken));
	return 0;
}
