#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWWindowList_getMeta();
void beNDMWWindowList_vtableRead();
void *fn_800237D0();
void *fn_80024180();
void *fn_80024B94();
void *fn_80029E64(void *);
void *fn_800365B4();
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80285EDC();
void *fn_802C2174();
void *fn_802CDF04();
void fn_803250AC();
void *fn_80325974();
void fn_80326074();
void igObjectList_register();
void igObject_register();
extern char lbl_804531BC[];
extern char lbl_80453220[];
extern char lbl_80453228[];
extern char lbl_804E16A8[];
extern char lbl_804E16B0[];
extern char lbl_804E16DC[];
extern char lbl_804E1708[];
extern char lbl_804E1724[];
extern char lbl_804E176C[];
extern char lbl_804E17B4[];
extern char lbl_804E17FC[];
extern char lbl_80535C78[];
extern void *lbl_80535C7C;
extern void *lbl_80535C80;
extern void *lbl_80535CCC;
extern void *lbl_805621F4;
void beNDMWWindowList_register();
void *beNDMWWindowList_getMetaCall();
void *fn_80325BA4();
void *beNDMWWindow_getMeta();
void fn_80325C44();
void beNDMWWindow_register();
void *beNDMWWindow_getMetaCall();
void beNDMWWindow_fieldInit();
}
extern "C" {
void fn_80325A88(){
 fn_80066188((int)beNDMWWindowList_register);
}
void beNDMWWindowList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535C78,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWWindowList_getMetaCall,(int)lbl_804531BC,20,(int)beNDMWWindowList_vtableRead,0,0,(int)lbl_804E16A8);
}
void *beNDMWWindowList_getMetaCall(){return beNDMWWindowList_getMeta();}
void *fn_80325B44(){
 if(!lbl_80535C7C) lbl_80535C7C=fn_800635C8(lbl_80453220,lbl_804E16B0,lbl_804E16DC,0xB);
 return lbl_80535C7C;
}
void *fn_80325BA4(){
 if(!lbl_80535C80) lbl_80535C80=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535C80;
}
void *beNDMWWindow_getMeta(){
 if(!lbl_80535C80 || !(reinterpret_cast<unsigned int *>(lbl_80535C80)[0x24/4]&4)) fn_80325C44();
 return lbl_80535C80;
}
void fn_80325C44(){
 fn_80066188((int)beNDMWWindow_register);
}
void beNDMWWindow_register(){
 fn_803250AC();
 fn_80066204(1,(int)&lbl_80535C80,(int)igObject_register,(int)fn_800237D0,(int)beNDMWWindow_getMetaCall,(int)lbl_80453228,80,0,(int)beNDMWWindow_fieldInit,0,(int)lbl_804E1708);
}
void *beNDMWWindow_getMetaCall(){return beNDMWWindow_getMeta();}
void beNDMWWindow_fieldInit(){
 void *value0=lbl_80535C80;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E1724,18);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80285EDC();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_802CDF04();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=fn_802C2174();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 void *value8=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+4));
 fn_8003EC68(value8,1);
 void *value9=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+11));
 void *value10=fn_80325974();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value9)+52)=1;
 void *value11=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+12));
 void *value12=fn_80325BA4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 void *value13=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+13));
 void *value14=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value13)+52)=1;
 void *value15=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+14));
 void *value16=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value15)+52)=1;
 void *value17=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+15));
 void *value18=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value17)+56)=value18;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value17)+52)=1;
 void *value19=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+16));
 void *value20=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value19)+56)=value20;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value19)+52)=1;
 void *value21=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+17));
 void *value22=fn_80024B94();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value21)+56)=value22;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value21)+52)=1;
 fn_800659C0(value0,lbl_804E176C,lbl_804E17B4,lbl_804E17FC,value1);
}
void *beNDMWTitle2Info_getMeta(){
 if(!lbl_80535CCC || !(reinterpret_cast<unsigned int *>(lbl_80535CCC)[0x24/4]&4)) fn_80326074();
 return lbl_80535CCC;
}
}
#pragma pop
