#include<stdio.h>
#include<string.h>


	void hosgeldinizfonksiyonu(){
		printf("Bilgi yarismasina hosgeldiniz\nAsagidaki kurallara okuyunuz!\n""*Yarismamiz puan sistemlidir.\n*Lutfen kullanici adinizi dogru giriniz kayitli degilseniz uye olunuz. ");
	}
	
	int secimyapmafonksiyonu(){
		
		int secim; //int secimfonksiyonunun deðiþkenidir.
		printf("Lutfen asagidaki seceneklerden birisini seciniz:\n[1]-Giris yap\n[2]-Kayit ol");
		scanf("%d",&secim);
		return secim;
		
	}
	
	int girisYap(char isim[200],char sifre[200]){
		char isimVeri[200];
		char sifreVeri[200];
		bool kontrol=false;
		
		while(kontrol==false)
		{	
			printf("\nLutfen isminizi giriniz:");
			scanf("%s",&isimVeri);
			printf("\nLutfen sifrenizi giriniz:");
			scanf("%s",&sifreVeri);
			
			if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0)
			{
				printf("Sisteme hosgeldiniz.");
				kontrol=true;
				
			}
			else
			{
				printf("hatali giris yaptiniz.");
			}
		
	}
	}
	int kayitOl(){
		char isim[200];
		char sifre[200];
		printf("\nLutfen bir isim belirleyiniz:");
		scanf("%s",&isim);
		printf("\nLutfen bir sifre belirleyiniz:");
		scanf("%s",&sifre);
		printf("Kayit olma isleminiz basarili bir sekilde gerceklesmistir.\n****Giris ekranina yönlendiriliyorsunuz*****");
		girisYap(isim,sifre);
	}
	int bilgiYarismasi(){
		char cevap[2];
		int puan=0;
		int can=3;
		
		printf("\n***Bilgi yarismasina hosgeldiniz.\nAsagidaki sorulari cevaplandiriniz\n");
		while(can!=0)
		{
		
		printf("[1]-Turkiye Cumhuriyet baskenti neresidir?\na-)Istanbul\nb-)Ankara\nc-)Izmir\nd-)Konya\n");
		scanf("%s",&cevap);
		
		if(strcmp(cevap,"b")==0)
		{
			printf("\nDogru cevap\n");
			puan+=10;
			printf("Puaniniz:%d\n",puan);
			
		}
		else
		{
			printf("Yanlis cevap verdiniz.Dogru cevap b sikkidir.\n");
			printf("Puaniniz:%d",puan);
			can-=1;
			printf("\nKalan caniniz:%d\n",can);
		}
		if (puan==10)
		{
				
		printf("[2]-Rusya'nin baskenti neresidir?\na-)Istanbul\nb-)Ankara\nc-)Moskova\nd-)Paris\n");
		scanf("%s",&cevap);
		
			if(strcmp(cevap,"c")==0)
			{
			printf("\nDogru cevap\n");
			puan+=10;
			printf("Puaniniz:%d\n",puan);
			
			}
				else
			{
			printf("Yanlis cevap verdiniz.Dogru cevap c sikkidir.\n");
			printf("Puaniniz:%d",puan);
				can-=1;
			printf("\nKalan caniniz:%d\n",can);
			}
			
		}
		if (puan==20)
		{
				
		printf("[3]-Fransa'nin baskenti neresidir?\na-)Istanbul\nb-)Ankara\nc-)Moskova\nd-)Paris\n");
		scanf("%s",&cevap);
		
			if(strcmp(cevap,"d")==0)
			{
			printf("\nDogru cevap\n");
			puan+=10;
			printf("Puaniniz:%d\n",puan);
			can=0;
			
			}
				else
			{
			printf("Yanlis cevap verdiniz.Dogru cevap d sikkidir.\n");
			printf("Puaniniz:%d",puan);
				can-=1;
			printf("\nKalan caniniz:%d\n",can);
			}
			
		}
		
	}
		return puan;
		
	}
	yarismaSon(int puan)
	{
		printf("\nYarismamiz sona ermistir.\nGüncel skorunuz:%d",puan);
	}
	
	int main(){
		
		char isim[200]="Cennet";
		char sifre[200]="16120";
		hosgeldinizfonksiyonu();
		
		int secim=secimyapmafonksiyonu(); 
		if (secim==1){
			girisYap(isim,sifre);
		}
		else if(secim==2){
			kayitOl();
			
		}
		int skor = bilgiYarismasi();
		yarismaSon(skor);
		
	}










	
	

