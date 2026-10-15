#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void fn_8003EC68(void *,int);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800D0068();
void ParticleTimer_registerNow();
extern char lbl_8041D5B0[];
extern char lbl_8041E6AC[];
extern char lbl_804D3210[];
extern char lbl_804D323C[];
extern char lbl_804D3268[];
extern char lbl_804D3294[];
extern void *ParticleArray_meta;
extern void *ParticleTimer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void ParticleArray_fieldInit(){
 void *value0=ParticleArray_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D3210,11);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_8041D5B0+0)));
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_8003EC68(value4,1);
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8004D4BC(value5,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value7=fn_800D0068();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+38)=0;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value9=fn_800D0068();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+56)=value9;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value8)+38)=0;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value10)+38)=0;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value11)+38)=0;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+10));
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value12)+38)=0;
 meta_setupFields(value0,lbl_804D323C,lbl_804D3268,lbl_804D3294,value1);
}
void *ParticleTimer_metaObject(){
 if(!ParticleTimer_meta) ParticleTimer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return ParticleTimer_meta;
}
void *ParticleTimer_getMeta(){
 if(!ParticleTimer_meta || !(reinterpret_cast<unsigned int *>(ParticleTimer_meta)[0x24/4]&4)) ParticleTimer_registerNow();
 return ParticleTimer_meta;
}
}
#pragma pop
