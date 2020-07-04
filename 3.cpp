#include<stdio.h>
int main(){
	
	
	//gecme kalma uygulamasý
	int girilennot;
	printf("Lutfen notunuzu girin:");
	scanf("%d",&girilennot);
	
	if(girilennot>=50){
		
		printf("tebrikler dersi gectiniz");
		
	}
	
	else{
		
		printf("uzgunum dersi gecemediniz.");
	}*/
	
	//girilen sayinin tek mi cift mi uygulamasi
	int girileceksayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&girileceksayi);
	if(girileceksayi%2==0){
		printf("sayi cifttir.");
		
		
	}
	else{
		printf("sayi tektir.");
	}*/
	
	//kullanýcý adý soyadý ve yasý girilnsin yasý 18 den buyukse ehliyet verilsin.
	char isim[10];
	char soyisim[10];
	int yas;
	printf("Lutfen adinizi giriniz:");
	scanf("%s",&isim);
	
	printf("\nLutfen soyadinizi giriniz:");
	scanf("%s",&soyisim);
	
	printf("\nLutfen yasinizi giriniz:");
	scanf("%d",&yas);
	
	if(yas>=18){
		printf("\n%s %s ehliyet alabilirsiniz",isim,soyisim);
		
	}
	else {
		printf("\n%s %s ehliyet alamazsiniz",isim,soyisim);
	}
	*/
	
	// girilen üç sayiyi sýralama uygulamasý
	
	int sayi1,sayi2,sayi3;
	printf("lutfen uc sayi giriniz:");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	if (sayi1>sayi2 && sayi1>sayi3)
	{
		if(sayi2>sayi3){
			printf("%d>%d>%d",sayi1,sayi2,sayi3);
		}
		else{
			printf("%d>%d>%d",sayi1,sayi3,sayi2);
			
		}
	}
	else if(sayi2>sayi1 && sayi2>sayi3){
		if(sayi1>sayi3){
			printf("%d>%d>%d",sayi2,sayi1,sayi3);
		}
		else{
			printf("%d>%d>%d",sayi2,sayi3,sayi1);
			
		}
	}
	else{
	 if(sayi1>sayi2)
	 {
	 		printf("%d>%d>%d",sayi3,sayi1,sayi2);
	 }
	 else {
	 	printf("%d>%d>%d",sayi3,sayi2,sayi1);
	 }
	
	}*/
	
	// switch case uygulamasý
	int sec;
	printf("lutfen 1-3 arasýnda bir sayi giriniz:");
	scanf("%d",&sec);
	switch(sec){
		case 1:
			printf("birinci durum secildi.");
			break;
		case 2:
			printf("ikinci durum secildi.");
			break;
		case 3:
			printf("ucuncu durum secildi.");
			break;
		default:
			printf("yanlis bir sayi girdiniz.");
				
	}
	return 0;*/
	// kullanýcýdan 2 sayý alýnsýn toplama çýkartma çarpma bölme iþlemlerinden seçilen yapýlsýn
	int sayi1,sayi2,secim;
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi1);
	printf("lutfen bir sayi giriniz:");
	scanf("%d",&sayi2);
	printf("Asagidaki islemlerden birini seciniz: \n [1]-Toplama Islemi \n[2]-Cikarma Islemi \n[3]-Carpma Islemi \n[4]-Bölme Islemi");
	scanf("%d",&secim);
	int toplama = sayi1 + sayi2;
	int cikarma = sayi1- sayi2;
	int carpma = sayi1*sayi2;
	int bolme = sayi1/sayi2;
	switch(secim)
	{
		case 1:
			printf("sayilarin toplami:%d",toplama);
			break;
		case 2:
			printf("sayilarin farki: %d",cikarma);
			break;
		case 3:
			printf("sayilarin carpimi:%d",carpma);
		
			break;
		case 4:
			printf("sayilarin bölümü:%d",bolme);
			break;	
	}
	
	
}
