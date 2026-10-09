#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800C6F94();
void *fn_8010DFFC();
void *fn_802AB928();
void *fn_802AC2F0();
void *fn_802ACF58();
extern char lbl_804CDD8C[];
extern char lbl_804CDDA4[];
extern char lbl_804CDDBC[];
extern char lbl_804CDDD4[];
extern void *lbl_80534474;
}
extern "C" {
void igMovieManager_fieldInit(){
 void *value0=lbl_80534474;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CDD8C,6);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_802AC2F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value6=fn_800C6F94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+38)=0;
 void *value7=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+3));
 void *value8=fn_802AB928();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value7)+38)=0;
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 void *value10=fn_802ACF58();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+38)=0;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+5));
 void *value12=fn_8010DFFC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 fn_800659C0(value0,lbl_804CDDA4,lbl_804CDDBC,lbl_804CDDD4,value1);
}
}
#pragma pop
