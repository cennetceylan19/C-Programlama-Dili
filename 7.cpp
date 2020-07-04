#include<stdio.h>
#include<string.h>

//Fonksiyonlar
 
 //fonksiyonlarda deðiþken alabilirler int main() fonk olduðu gibi. Void deðiþkenini alan fonk dýþarýya bilgi vermez kendi içerisinde çalýþýr.
 
/*
 void selamlamamesaji()
 {
 	printf("Hosgeldiniz..\n");
  } 
 
 int main(){
 	
 	
 	selamlamamesaji();
 	selamlamamesaji();
 	selamlamamesaji();
 	
 	
 }
 
 void kullanicibilgileri(char isim[20])
 {
 	printf("Kullanici isminiz:%s",isim); //fonksiyonun içerisinde isim deðiþkenimizi yukarda fonksiyon parametresi olarak tanýmlamak zorundayýz.
 }
 
 int main()
 {
 	char isim[20];
 	printf("Lutfen kullanici isminizi giriniz:");
 	scanf("%s",&isim);
 	//printf("Kullanici isminiz:%s",isim); bu komutu bir fonksiyona atayarak çalýþtýrýrsak.
 	kullanicibilgileri(isim); //isim deðiþkenimize göre fonsiyonun çalýþmasý için parametreyi yazmamýz gerekiyor.
 }
 
 void sayisirala(int a, int b) // a ve b lokal parametrelerdir sadece bu fonksiyona özel kullanýlýr. diðer fonksiyonlarda yazýlabilir.
 {
 	if(a<b)
 	{
 		printf("%d<%d",a,b);
 		
	 }
	if(b<a)
	{
		printf("%d<%d",b,a);
		
	 } 
	else
	{
		printf("%d==%d",a,b);
	}
 }
 
 int main()
 {
 	int sayi1;
 	int sayi2;
 	printf("Lutfen sayi1 i giriniz:");
 	scanf("%d",&sayi1);
 	printf("Lutfen sayi2 yi giriniz:");
 	scanf("%d",&sayi2);
 	sayisirala(sayi1,sayi2);
 	
 }
 
 void toplamaislemi(int a, int b)
 {
  printf("Toplama Islemi:%d",a+b);
  	
 }
 void cikarmaislemi( int a, int b)
 {
 int cikarma;
 	
 	if(a<b){
 		cikarma=(b-a);
	 }
	 else if (b<a)
	 {
	 	cikarma=(a-b);
	 	
	 }
  printf("\nCikarma islemi:%d",cikarma);
 }


 int main(){
 	
 	int sayi1,sayi2;
 	printf("Lutfen sayi1 i giriniz:");
 	scanf("%d",&sayi1);
 	printf("Lutfen sayi2 yi giriniz:");
 	scanf("%d",&sayi2);
 	toplamaislemi(sayi1,sayi2);
 	cikarmaislemi(sayi1,sayi2);

 }
 void tekmiciftmi(int a)
 {
 	if(a%2==0)
 	{
 		printf("Girilen %d sayisi ciftir.",a);
 		
	 }
	 else
	 {
	 	printf("Girilen %d sayisi tektir.",a);
	 }
 }
 
 
 
 
 
 int main()
 {
 	int sayi;
 	printf("Lutfen bir sayi giriniz:");
 	scanf("%d",&sayi);
 	tekmiciftmi(sayi);
 	
 }
 void usAlma(int a, int b)
 {
 	int i, cevap;
 	for(i=1;i<=b;i++)
 	{
 		cevap=a*a;
 		
	 }
	 printf("\nGirilen %d sayisinin alinan kuvveti %d",a,cevap);
 }
 
 
 int main()
 {
 	int sayi,us;
 	printf("Lutfen bir sayi giriniz:");
 	scanf("%d",&sayi);
 	printf("\nLutfen bir us degeri giriniz:");
 	scanf("%d",&us);
 	usAlma(sayi,us);
 }
 
 
 int toplamaislemi(int a, int b)
 {
 	int toplam =a+b;
 	
	return toplam;//baþka bir fonksiyonda kullanýlmak istenen deðiþkeni göndermek için kullanýlýr.	
}
 
 int main()
 {
 	int sayi1,sayi2;
 	scanf("%d %d",&sayi1,&sayi2);
 	int cevap=toplamaislemi(sayi1,sayi2);
 	
 	printf("sayilarin toplami:%d",cevap);
 }
 */
 
 int sayilaresitmi(int a, int b)
 {
 	if(a==b)
 	{
 		return 1; //true
	 }
	 else
	 {
	 	return 0; //false
	 }
 }
 
 
 
int main()
{
	int sayi1, sayi2;
	scanf("%d %d",&sayi1,&sayi2);
	bool deger=sayilaresitmi(sayi1,sayi2);
	if(deger)
	{
		printf("sayilar esittir.");
	}
	else
	{
		printf("sayilar esit degildir.");
	}
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
