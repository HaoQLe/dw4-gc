#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *lbl_8055E7D8;
extern void *lbl_80562794;
extern void *lbl_8056279C;
extern void *lbl_805627B8;
extern void *lbl_805627CC;
extern void *lbl_805627D4;
extern void *lbl_805627E0;
extern void *lbl_805627F4;
extern void *lbl_8056283C;
extern void *lbl_80562854;
extern void *lbl_8056285C;
extern void *lbl_80562AF8;
}
extern "C" {
void *fn_800C6734(){return lbl_8055E7D8;}
void *fn_800C673C(int p0,int p1){
 lbl_8055E7D8=(void *)p1;
 return (void *)p0;
}
void *fn_800C6744(){return lbl_80562AF8;}
void *fn_800C674C(int p0,int p1){
 lbl_80562AF8=(void *)p1;
 return (void *)p0;
}
void *fn_800C6754(){return lbl_80562794;}
void *fn_800C675C(){return lbl_8056279C;}
void *fn_800C6764(){return lbl_805627B8;}
void *fn_800C676C(){return lbl_805627CC;}
void *fn_800C6774(){return lbl_805627D4;}
void *fn_800C677C(){return lbl_805627E0;}
void *fn_800C6784(){return lbl_805627F4;}
void fn_800C678C(void *object,UnknownGenValue *value){
 if(value) ++value->unknown04;
 UnknownGenValue *old=*reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x8C);
 if(old) unknownGenDrop(old);
 *reinterpret_cast<UnknownGenValue **>(reinterpret_cast<char *>(object)+0x8C)=value;
}
void *fn_800C67FC(){return lbl_8056283C;}
void *fn_800C6804(){return lbl_80562854;}
void *fn_800C680C(){return lbl_8056285C;}
}
#pragma pop
