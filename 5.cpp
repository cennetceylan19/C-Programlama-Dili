// while d�ng�s�
#include<stdio.h>


int main()
{
	// while ko�ulu sa�l�yorsa komutu �al��t�r�yor.Ve bir d�ng� halinde s�r�yor.
	//while d�ng�s�yle 0-100 aras�ndaki say�lar� �nce iki�er iki�er sonra ��er ��er art�r�p yazan program
	/* while(ko�ul)
	{
	i�erik 
	i�erik
	.
	.
	.
	}*/
	
	/*int i=0;
	while(i<=100)
	{ 
	if(i%3==0)//3 e b�l�n�nce kalan 0 ifadesi
	{
		printf("%d\n",i);
	}
		
		i++;
	} 
	
	
	// while ile fakt�riyel hesaplama

	int sayi;
	int i=1; //0 dan ba�alt�lamaz fakt�riyel hesab� yap�lamayaca�� i�in.
	int faktoriyel=1;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while(i<=sayi)
	{
		faktoriyel=faktoriyel*i;
		i++;
	}
	printf("Girilen sayinin faktoriyeli:%d",faktoriyel);
	
	return 0;
		// girilen say�ya kadar olan b�t�n say�lar� toplama uygulamas�
		
		int i=0;
		int sayi;
		int toplam=0;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		while(i<=sayi)
		{
			printf("degerler:%d\n",i);
			toplam+=i;
			i++;
			
		}
		printf("\nGirilen sayiya kadar olan sayilerin toplami:%d",toplam);
			
		// Girilen sayinin basamak degerlerini tolama uygulamas�	
			
		int sayi, toplam=0, kalan;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		while(kalan!=0)
		{
			kalan=sayi%10; 
			toplam+=kalan;
			sayi/=10;
		}
		printf("Basamak degeri toplami:%d",toplam);		
		
		
		//Girilen syiyi tersten yazma uygulamas�
		int sayi,ters;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		while(sayi!=0)
		{
			ters*=10;
			ters=ters+sayi%10;
			sayi/=10;
			
			
					}
		printf("\nGirilen sayinin tersi:%d",ters);
		
		
		// Do while ilk �nce komutu �al��t�r�yor sonra ko�ulu sa�lay�p sa�mad���n� kontrol ediyor. Ve bir d�ng� halinde s�r�yor.
		
		do{
			komut
			.
			.
			.
		}
		while(kosul);
		 bu �ekilde kullan�l�r.
		
		int i=10;
		do{
			printf("%d\n",i);
			i--;
		}
		while(i<10&&i>0);
		
		
		//
		for(de�er;s�n�r;de�i�im)
		{
		.
		.
		komut
		.
		.
		}
		�eklinde ifade edilir.
	
		int i;
		int sayi;
		int ciftsayitopla=0;
		int teksayitopla=0;
		 printf("Lutfen bir sayi giriniz:");
		 scanf("%d",&sayi);
		 
		
		for(i=0;i<=sayi;i++) // e�er i de�i�keni yukarda int i=0; olarak tan�mlan�rsa for(;i<10;i++) �eklinde yaz�lmal�d�r.
		{
			if(i%2==0)
			{
				printf("%d\n",i);
				ciftsayitopla+=i;
			}
			
			else
			{
				teksayitopla+=i;
			}
			
		}
		
		printf("Cift sayi toplaminin sonucu:%d\nTek sayi toplam sonucu:%d ",ciftsayitopla,teksayitopla);
		
	int i,sayac=0,sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
		if(sayac==0){
			printf("\nGirilen sayi asald�r.");		
		}
		else{
			printf("\nGirilen sayi asal degildir.");
		}
	}	
	
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
	*/
	//break komutu sona erdirir. Continue istenilen komutu d��ar� atar.
	int i;
	for(i=1;i<10;i++)
	{
		if(i==5)
		{ 
		break;
		}
		printf("%d",i);
	}
		for(i=1;i<10;i++)
	{
		if(i==5)
		{ 
		continue;
		}
		printf("%d",i);
	}
	
	
	
	
}

