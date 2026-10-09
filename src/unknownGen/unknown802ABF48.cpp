#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *fn_800C6F94();
void *fn_800CE788();
void fn_802AC0F8();
extern char lbl_804CDB14[];
extern char lbl_804CDB20[];
extern char lbl_804CDB2C[];
extern char lbl_804CDB38[];
extern void *lbl_805343DC;
extern void *lbl_805343EC;
}
extern "C" {
void igCriMovieCodec_fieldInit(){
 void *value0=lbl_805343DC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CDB14,3);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 void *value5=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value6=fn_800C6F94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value5)+38)=0;
 fn_800659C0(value0,lbl_804CDB20,lbl_804CDB2C,lbl_804CDB38,value1);
}
void *fn_802AC024(void *object){
 fn_802AC0F8();
 return fn_8006546C(lbl_805343EC,object);
}
void *igCriMovieData_getMeta(){
 if(!lbl_805343EC || !(reinterpret_cast<unsigned int *>(lbl_805343EC)[0x24/4]&4)) fn_802AC0F8();
 return lbl_805343EC;
}
}
#pragma pop
