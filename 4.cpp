#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int main(){
	//kullan�c�dan iki say� al�ns�n d�rt i�lemden se�ilen i�lem yap�ls�n
	int sayi1, sayi2, secim;
	printf("1. Sayiyi girin:");
	scanf("%d",&sayi1);
	printf("2.Sayiyi girin:");
	scanf("%d",&sayi2);
	
	printf("Asagidaki islemlerden birini seciniz.\n[1]Toplama\n[2]Cikartma\n[3]Carpma\n[4]Bolme");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			printf("Girilen iki sayinin toplami=%d", sayi1+sayi2);
			break;
			
		case 2:
			printf("Girilen iki sayinin arasindaki fark=%d", sayi1-sayi2);
			break;
		case 3:
			printf("Girilen iki sayinin carpimi=%d", sayi1*sayi2);	
			break;
			
		case 4:
			printf("Girilen iki sayinin birbirine bolumu=%d", (sayi1/sayi2));	
			break;
		default:
		printf("Bir hata yaptiniz l�tfen programi tekrar calistiriniz.");	
		
	if (secim==1)
	{
		printf("Girilen iki sayinin toplami=%d", sayi1+sayi2);
	}
	else if (secim==2)
	{
		printf("Girilen iki sayinin arasindaki fark=%d", sayi1-sayi2);
	}
	else if (secim==3)
	{
		printf("Girilen iki sayinin carpimi=%d", sayi1*sayi2);
	}
	else if (secim==4)
	{
		printf("Girilen iki sayinin birbirine bolumu=%d", sayi1/sayi2);
	}
	
	else {
		printf("Bir hata yaptiniz l�tfen program� tekrar calistiriniz.");
	}
	
	// Sansl� �ekili� uygulamas�
	char isim[10],SoyIsim[10];
	int s, sayi;
	printf("Sansli cekilis uygulamas�na hosgeldiniz!!!");
	printf("\nLutfen isminizi giriniz:");
	scanf("%s",&isim);
	printf("\nLutfen soy isminizi giriniz:");
	scanf("%s",&SoyIsim);
	printf("Asagidaki islemler icin secim yapiniz:\n[1]-Sansli cekilisi dene\n[2]-Kullanici bilgilerinizi kontrol edinizi");
	printf("Islem seciniz:");
	scanf("%d",&s);
	if(s==1){
		printf("Su an sansli cekilis uygulamasindasiniz\nlutfen 1-5 arasinde bir sayi giriniz.");
		scanf("%d",&sayi);
		srand(time(NULL));//program her baslat�ld���nda random say�y� de�i�tiriyor.
		int randomsayi=1+rand()%5 ;//1-5 aras�ndaki random say�
		
		if(s==randomsayi){
			printf("\nGirdiginiz Sayi:%d\nCekilisteki Sayi:%d",s,randomsayi);
			printf("Kazandiniz!!!");
				}
		else{
				printf("\nGirdiginiz Sayi:%d \nCekilisteki Sayi:%d",s,randomsayi);
				printf("\nBir daha deneyiniz!!!");
		}
			
	
	}
	else if(s==2)
	{
		printf("\nKullanici Ad�n�z:%s\nKullanici Soyadiniz:%s",isim,SoyIsim);
		
		
		}*/
		
	//Bankamatik uygulamas�
	//Kullan�c� bilgilerinin al�nmas�
	//Bakiye g�r�lecek
	//Para yat�rma ve para cekme
	
	char isim[10]="Cennet";
	int parola=1234;
	int bakiye=100;
	char girilecekisim[10];
	int girilecekparola;
	int yatirilacakpara,cekilecekpara;
	int secim;
	
	printf("Bankamiza Hosgeldiniz!!!\n Lutfen Isminizi Giriniz:");
	scanf("%s",&girilecekisim);
	printf("\nLutfen parolanizi girin:");
	scanf("%d",&girilecekparola);
	
	if(strcmp(isim,girilecekisim)==0 && parola==girilecekparola)//strcmp stringleri e�le�tirmek i�in kullan�l�r. <string.h>k�t�phanesi gerekir. 
	{
		printf("Kullanici bilgileri eslesti");
		printf("\nMerhaba %s Hanim hesabiniza hosgeldiniz!",isim);
		
		printf("\n\nAsagidaki islemlerden birini seciniz;\n[1]-Para yatirma\n[2]-Para cekme\n[3]-Kullanici bilgileri\n Seceneklerden birini seciniz:");
		scanf("%d",&secim);
		switch(secim){
			case 1: 
			printf("Para yatirma isleminizdesiniz\nNe kadar para yatirmak istiyorsunuz?\nYatirilacak miktari giriniz:");
			scanf("%d",&yatirilacakpara);
			bakiye=bakiye+yatirilacakpara; //bakiye+=yatirilacakpara seklinde de olur.
			printf("Para yatirma isleminiz gerceklesmistir.\nYatirilan miktar:%d\nBakiyeniz:%d",yatirilacakpara,bakiye);
			break;
			case 2:
				printf("Para cekme islemindesiniz.\nNe kadar para cekmek istiyorsunuz.\nCekilecek para:");
				scanf("%d",&cekilecekpara);
				bakiye=bakiye-cekilecekpara; //bakiye-=cekilecekpara  seklinde de olur.
				printf("Para cekme isleminiz gerceklesmistir.\nCekilen para:%d\nKalan bakiye:%d",cekilecekpara,bakiye);
				break;
			case 3:
				printf("Kullanici aray�z�ne girdiniz.\nKullanici adiniz:%s\nKullanici parolaniz:%d\nHesabinizdeki bakiye:%d",isim,parola,bakiye);
			default:
				printf("Yanlis secim!!!");			
		}
	}
	else
	{
		printf("Kullanici adinizi ya da sifrenizi yanlis girdiniz tekrar deneyiniz..");
	}	
}

