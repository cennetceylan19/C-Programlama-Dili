#include<stdio.h>
#include<string.h>
//struct farklý türden deðiþkenleri bir arada tutan bir yapý olarak tanýmlanabilir.
/*

//örnek araba modelleri

struct arabalar{
	char marka[20];
	char model[20];
	int yil;
	int beygirgucu;
	
};


int main(){
	struct arabalar arabaBir{"Alfa Romeo","4C",2017,240};
	struct arabalar arabaIki{"Aston Martin","DB7",2004,420};
	printf("------------Arabalarimiz------------\n""%s-%s-%d-%d",arabaBir.marka,arabaBir.model,arabaBir.yil,arabaBir.beygirgucu);
	printf("\n%s-%s-%d-%d",arabaIki.marka,arabaIki.model,arabaIki.yil,arabaIki*.beygirgucu);

//örnek çalýþanlar

struct calisanlarBilgi{
	char isim[200];
	char soyisim[200];
	int maas;
	
};



int main()
{
	struct calisanlarBilgi calisanlar[4];
	int i=1;
	
	for (i;i<5;i++){
		printf("Lutfen %d calisanin bilgilerini asagiya giriniz:\n",i);
		printf("Isim giriniz:");
		scanf("%s",&calisanlar[i].isim);
		printf("Soyisim giriniz:");
		scanf("%s",&calisanlar[i].soyisim);
		printf("Maas giriniz:");
		scanf("%d",&calisanlar[i].maas);
		
		
	}
	for(int j;j<5;j++)
	{
		printf("\n %s-%s-%d\n",calisanlar[j].isim, calisanlar[j].soyisim ,calisanlar[j].maas);
	}



	
//örnek iç içe structlar
struct detay{
	char renk[20];
	char boyut[20];
	char dipnot[20];
};
struct urunler{
	char isim[20];
	int fiyat;
	struct detay bilgi;
};






int main(){
	struct urunler urunBir;
	
strcpy(urunBir.isim,"Televizyon");
urunBir.fiyat=250;
strcpy(urunBir.bilgi.renk,"Kirmizi");
strcpy(urunBir.bilgi.boyut,"1500*2600");
strcpy(urunBir.bilgi.dipnot,"Sahibinden kiraliktir.");	
 printf("Asagida verilen urun bilgisini inceleyiniz:\n");
 printf("urunun ismi:%s\n urunun rengi:%s\nurunun fiyati:%d\nurunun boyutu:%s\nurunun dipnotu:%s",urunBir.isim,urunBir.bilgi.renk,urunBir.fiyat,urunBir.bilgi.boyut,urunBir.bilgi.dipnot);
	
	
}

}*/

//structlarda fonksiyonlar


struct ogrenciBilgileri{
	char isim[20];
	char soyisim[20];
	int dogumYili;
	int numara;
	
};

void ogrenciBilgileriGoster(struct ogrenciBilgileri bilgi){
	printf("Ogrenci isim:%s\nOgrenci soyisim:%s\nOgrenci dogum yili:%d\nOgrenci numarasi:%d",bilgi.isim,bilgi.soyisim,bilgi.dogumYili,bilgi.numara);
	
}

struct ogreciBilgileri ogrencikayit()
{
	struct ogrenciBilgileri kayit;
	
	printf("Lutfen ogrenci bilgilerini giriniz\nLutfen ogrenci ismini giriniz:");
	scanf("%s",&kayit.isim);
	printf("\nLutfen ogrenci soyisimini giriniz:");
	scanf("%s",&kayit.soyisim);
		printf("\nLutfen ogrenci dogum yilini giriniz:");
	scanf("%d",&kayit.dogumYili);
	printf("\nLutfen ogrenci numarasini giriniz:");
	scanf("%d",&kayit.numara);
	return kayit;
	
}



int main(){
	struct ogrenciBilgileri ogrenciBir=ogrencikayit();
	
	ogrenciBilgileriGoster(ogrenciBir);
	
	
}
































