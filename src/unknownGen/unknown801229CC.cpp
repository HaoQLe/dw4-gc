#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80122FCC(int,int);
void fn_8012305C(int,int);
float fn_801230E4(int,int);
void fn_80123150(int,int);
void fn_801232A8(int,int);
void fn_801232F8(int,int);
void fn_801233EC(int,int);
void fn_801234CC(int,int);
void fn_801235B8(int,int);
void fn_80123634(int,int);
void fn_801236B0(int,int);
void fn_8012372C(int,int);
void fn_801237C4(int,int);
void *fn_80123840();
void fn_80123860(int);
void fn_8012388C(int);
float fn_801238A4(int,int);
void *fn_80127DF0(void *,void *,void *);
void *fn_80127E48(void *,void *,void *);
void *fn_80127EA0(void *,void *,void *);
void *fn_80127EF8(void *,void *);
void *fn_80127F2C(void *,void *);
void *fn_80127F60(void *,void *);
void *fn_80127F94(void *,void *);
void *fn_80127FC8(void *,void *);
void *fn_80127FFC(void *,void *);
void *fn_80128030(void *,void *);
void *fn_80128064(void *,void *);
void *fn_80128098(void *,void *);
void *igPlane_getMeta();
void *igSphere_getMeta();
extern void *lbl_8056395C;
extern void *lbl_8056397C;
extern void *lbl_80563A34;
void *fn_801229EC();
}
extern "C" {
void *fn_801229CC(){return fn_801229EC();}
void *fn_801229EC(){
 void *value0=lbl_80563A34;
 void *value3=fn_80127DF0(value0,value0,(void *)fn_8012305C);
 void *value4=igPlane_getMeta();
 void *value5=fn_80127DF0(lbl_80563A34,value4,(void *)fn_801230E4);
 void *value6=igSphere_getMeta();
 fn_80127DF0(lbl_80563A34,value6,(void *)fn_80122FCC);
 void *value1=lbl_80563A34;
 fn_80127EA0(value1,value1,(void *)fn_801232F8);
 fn_80127EA0(lbl_80563A34,lbl_8056397C,(void *)fn_801232A8);
 fn_80127EA0(lbl_80563A34,lbl_8056395C,(void *)fn_801233EC);
 void *value2=lbl_80563A34;
 fn_80127E48(value2,value2,(void *)fn_801236B0);
 fn_80127E48(lbl_80563A34,lbl_8056395C,(void *)fn_8012372C);
 fn_80127EF8(lbl_80563A34,(void *)fn_80123150);
 fn_80127F60(lbl_80563A34,(void *)fn_801234CC);
 fn_80127F2C(lbl_80563A34,(void *)fn_80123634);
 fn_80127FC8(lbl_80563A34,(void *)fn_801235B8);
 fn_80127F94(lbl_80563A34,(void *)fn_801237C4);
 fn_80127FFC(lbl_80563A34,(void *)fn_80123840);
 fn_80128030(lbl_80563A34,(void *)fn_80123860);
 fn_80128064(lbl_80563A34,(void *)fn_8012388C);
 void *value7=fn_80128098(lbl_80563A34,(void *)fn_801238A4);
 return value7;
}
void *fn_80122B40(int p0,int p1){
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+0)=value0;
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+4)=value1;
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+8)=value2;
 float value3=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+28);
 float value4=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 float value5=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+12)=value5;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+16)=value4;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+20)=value3;
 float value6=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 float value7=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 float value8=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+24)=value8;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+28)=value7;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+32)=value6;
 float value9=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+28);
 float value10=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 float value11=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+8);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+36)=value11;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+40)=value10;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+44)=value9;
 float value12=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 float value13=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 float value14=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+48)=value14;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+52)=value13;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+56)=value12;
 float value15=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+28);
 float value16=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 float value17=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+60)=value17;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+64)=value16;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+68)=value15;
 float value18=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 float value19=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 float value20=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+72)=value20;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+76)=value19;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+80)=value18;
 float value21=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+84)=value21;
 float value22=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+24);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+88)=value22;
 float value23=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+28);
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p1)+92)=value23;
 return (void *)p0;
}
}
#pragma pop
