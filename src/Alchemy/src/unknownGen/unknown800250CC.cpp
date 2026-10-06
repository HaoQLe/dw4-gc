#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80025028();
void fn_80025064();
void *fn_80037E48();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
extern char lbl_80463664[];
extern char lbl_8055D0B8[8];
extern char lbl_8055D0D0[8];
extern char lbl_8055D0D8[8];
extern char lbl_8055D0E0[8];
extern void *lbl_805615A8;
void *fn_8002513C();
void fn_8002515C();
}
extern "C" {
void fn_800250CC(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805615A8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002513C,(int)lbl_80463664,16,(int)fn_80025064,(int)fn_8002515C,0,0);
}
void *fn_8002513C(){return fn_80025028();}
void fn_8002515C(){
 void *value0=lbl_805615A8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D0B8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+53)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+64)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+65)=1;
 fn_800659C0(value0,lbl_8055D0D0,lbl_8055D0D8,lbl_8055D0E0,value1);
}
}
#pragma pop
