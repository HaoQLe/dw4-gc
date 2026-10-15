#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void fn_8004D4BC(void *,float);
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800D2414();
void *fn_801C010C();
void fn_802E81A4();
void fn_802E8204();
void fn_802E8264();
void fn_802E82C4();
extern char lbl_8041E6AC[];
extern char lbl_8042149C[];
extern char lbl_804D3364[];
extern char lbl_804D33AC[];
extern char lbl_804D33F4[];
extern char lbl_804D343C[];
extern char lbl_804D3484[];
extern char lbl_804D3488[];
extern char lbl_804D348C[];
extern char lbl_804D3490[];
extern void *ParticleInfo_meta;
}
extern "C" {
void ParticleInfo_fieldInit(){
 void *value0=ParticleInfo_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_804D3364,18);
 void *value2=meta_field(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)192;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+36)=3;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+52)=(void *)32;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+36)=3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_8004D4BC(value4,*reinterpret_cast<float *>((lbl_8042149C+0)));
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 fn_80053650(value5,10);
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value7=fn_800D2414();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 void *value8=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 fn_80046E58(value8,lbl_804D3484);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value8)+52)=(void *)fn_802E8264;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 fn_80046E58(value9,lbl_804D3488);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+52)=(void *)fn_802E8204;
 void *value10=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 fn_80046E58(value10,lbl_804D348C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value10)+52)=(void *)fn_802E81A4;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+11));
 fn_80046E58(value11,lbl_804D3490);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+52)=(void *)fn_802E82C4;
 void *value12=meta_field(value0,(reinterpret_cast<char *>(value1)+13));
 fn_80053650(value12,1);
 void *value13=meta_field(value0,(reinterpret_cast<char *>(value1)+14));
 fn_80053650(value13,1);
 void *value14=meta_field(value0,(reinterpret_cast<char *>(value1)+16));
 fn_8004D4BC(value14,*reinterpret_cast<float *>((lbl_8041E6AC+0)));
 void *value15=meta_field(value0,(reinterpret_cast<char *>(value1)+17));
 void *value16=fn_801C010C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 meta_setupFields(value0,lbl_804D33AC,lbl_804D33F4,lbl_804D343C,value1);
}
}
#pragma pop
