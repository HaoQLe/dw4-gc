#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80075874(void *,int);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B8E18();
void fn_800CDD14();
void fn_800CDD60();
extern char lbl_80477D08[];
extern char lbl_804798AC[];
extern char lbl_804798C4[];
extern char lbl_804798DC[];
extern char lbl_804798F0[];
extern char lbl_80479904[];
extern char lbl_80479920[];
extern char lbl_8047993C[];
extern char lbl_80479A18[];
extern char lbl_80479A28[];
extern char lbl_8047CAE8[];
extern char lbl_8047CB68[];
extern char lbl_8047CBEC[];
extern char lbl_8047CC70[];
extern char lbl_8047CCF4[];
extern char lbl_8047CE18[];
extern char lbl_8047CEA0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E510[8];
extern char lbl_8055E520[8];
extern char lbl_8055E528[8];
extern char lbl_8055E530[8];
extern char lbl_8055E538[4];
extern char lbl_8055E53C[4];
extern char lbl_8055E540[4];
extern char lbl_8055E544[4];
extern char lbl_8055E548[4];
extern char lbl_8055E54C[4];
extern char lbl_8055E550[4];
extern char lbl_8055E554[4];
extern char lbl_8055E558[4];
extern char lbl_8055E55C[4];
extern char lbl_8055E560[4];
extern char lbl_8055E564[4];
extern char lbl_8055E568[4];
extern char lbl_8055E56C[4];
extern char lbl_8055E570[4];
extern char lbl_8055E574[4];
extern char lbl_8055E578[4];
extern char lbl_8055E57C[8];
extern char lbl_8055E584[8];
extern char lbl_8055E58C[8];
extern char lbl_8055E594[8];
extern char lbl_8055E59C[4];
extern void *lbl_805621F4;
extern void *lbl_80562908;
extern void *lbl_80562914;
extern void *lbl_8056291C;
extern void *lbl_80562924;
extern void *lbl_8056292C;
extern void *lbl_80562934;
extern void *lbl_80562938;
extern void *lbl_80562944;
extern void *lbl_80562948;
void *fn_800B7EF0();
void *fn_800B7F2C();
void fn_800B7F84();
void fn_800B7FAC();
void *fn_800B801C();
void fn_800B803C();
void *fn_800B80F4();
void *fn_800B8130();
void fn_800B8188();
void fn_800B81B0();
void *fn_800B8220();
void fn_800B8240();
void *fn_800B82F4();
void *fn_800B8330();
void fn_800B8388();
void fn_800B83B0();
void *fn_800B8420();
void fn_800B8440();
void *fn_800B84BC();
void *fn_800B84F8();
void fn_800B8550();
void fn_800B8578();
void *fn_800B85E8();
void fn_800B8608();
void *fn_800B8694();
void *fn_800B86D0();
void fn_800B8728();
void fn_800B8750();
void *fn_800B87C0();
void fn_800B87E0();
void *fn_800B8848();
void fn_800B8884();
void fn_800B88AC();
void *fn_800B8910();
void *fn_800B89A4();
void *fn_800B89E0();
void fn_800B8A38();
void fn_800B8A60();
void *fn_800B8AD0();
void fn_800B8AF0();
void *fn_800B8C04();
void *fn_800B8C40();
void fn_800B8D58();
void fn_800B8D80();
void *fn_800B8DF8();
}
struct UnknownGenObject800B7F2C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8130_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B8330_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B84F8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B86D0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B89E0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){fn_8006665C(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=lbl_8047CEA0;}
};
extern "C" {
void *fn_800B7EF0(){
 if(!lbl_80562908 || !(reinterpret_cast<unsigned int *>(lbl_80562908)[0x24/4]&4)) fn_800B7F84();
 return lbl_80562908;
}
void *fn_800B7F2C(){
 UnknownGenObject800B7F2C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CAE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B7F84(){
 fn_80066188((int)fn_800B7FAC);
}
void fn_800B7FAC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562908,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B801C,(int)lbl_804798AC,16,(int)fn_800B7F2C,(int)fn_800B803C,0,0);
}
void *fn_800B801C(){return fn_800B7EF0();}
void fn_800B803C(){
 void *value0=lbl_80562908;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E510,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80075874(value2,255);
 fn_800659C0(value0,lbl_8055E520,lbl_8055E528,lbl_8055E530,value1);
}
void *fn_800B80B8(){
 if(!lbl_80562914) lbl_80562914=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562914;
}
void *fn_800B80F4(){
 if(!lbl_80562914 || !(reinterpret_cast<unsigned int *>(lbl_80562914)[0x24/4]&4)) fn_800B8188();
 return lbl_80562914;
}
void *fn_800B8130(){
 UnknownGenObject800B8130_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CB68;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8188(){
 fn_80066188((int)fn_800B81B0);
}
void fn_800B81B0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562914,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8220,(int)lbl_804798C4,16,(int)fn_800B8130,(int)fn_800B8240,0,0);
}
void *fn_800B8220(){return fn_800B80F4();}
void fn_800B8240(){
 void *meta=lbl_80562914;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E538,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E53C,lbl_8055E540,lbl_8055E544,field);
}
void *fn_800B82BC(void *object){
 fn_800B8388();
 return fn_8006546C(lbl_8056291C,object);
}
void *fn_800B82F4(){
 if(!lbl_8056291C || !(reinterpret_cast<unsigned int *>(lbl_8056291C)[0x24/4]&4)) fn_800B8388();
 return lbl_8056291C;
}
void *fn_800B8330(){
 UnknownGenObject800B8330_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CBEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8388(){
 fn_80066188((int)fn_800B83B0);
}
void fn_800B83B0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056291C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8420,(int)lbl_804798DC,16,(int)fn_800B8330,(int)fn_800B8440,0,0);
}
void *fn_800B8420(){return fn_800B82F4();}
void fn_800B8440(){
 void *meta=lbl_8056291C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E548,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E54C,lbl_8055E550,lbl_8055E554,field);
}
void *fn_800B84BC(){
 if(!lbl_80562924 || !(reinterpret_cast<unsigned int *>(lbl_80562924)[0x24/4]&4)) fn_800B8550();
 return lbl_80562924;
}
void *fn_800B84F8(){
 UnknownGenObject800B84F8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CC70;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8550(){
 fn_80066188((int)fn_800B8578);
}
void fn_800B8578(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562924,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B85E8,(int)lbl_804798F0,16,(int)fn_800B84F8,(int)fn_800B8608,0,0);
}
void *fn_800B85E8(){return fn_800B84BC();}
void fn_800B8608(){
 void *value0=lbl_80562924;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E558,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80046E58(value2,lbl_8055E568);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDD14;
 fn_800659C0(value0,lbl_8055E55C,lbl_8055E560,lbl_8055E564,value1);
}
void *fn_800B8694(){
 if(!lbl_8056292C || !(reinterpret_cast<unsigned int *>(lbl_8056292C)[0x24/4]&4)) fn_800B8728();
 return lbl_8056292C;
}
void *fn_800B86D0(){
 UnknownGenObject800B86D0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CCF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8728(){
 fn_80066188((int)fn_800B8750);
}
void fn_800B8750(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056292C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B87C0,(int)lbl_80479904,16,(int)fn_800B86D0,(int)fn_800B87E0,0,0);
}
void *fn_800B87C0(){return fn_800B8694();}
void fn_800B87E0(){
 void *value0=lbl_8056292C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E56C,1);
 fn_800659C0(value0,lbl_8055E570,lbl_8055E574,lbl_8055E578,value1);
}
void *fn_800B8848(){
 if(!lbl_80562934 || !(reinterpret_cast<unsigned int *>(lbl_80562934)[0x24/4]&4)) fn_800B8884();
 return lbl_80562934;
}
void fn_800B8884(){
 fn_80066188((int)fn_800B88AC);
}
void fn_800B88AC(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_80562934,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8910,(int)lbl_80479920,12,0,0,0,0);
}
void *fn_800B8910(){return fn_800B8848();}
void *fn_800B8930(void *object){
 fn_800B8A38();
 return fn_8006546C(lbl_80562938,object);
}
void *fn_800B8968(){
 if(!lbl_80562938) lbl_80562938=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562938;
}
void *fn_800B89A4(){
 if(!lbl_80562938 || !(reinterpret_cast<unsigned int *>(lbl_80562938)[0x24/4]&4)) fn_800B8A38();
 return lbl_80562938;
}
void *fn_800B89E0(){
 UnknownGenObject800B89E0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CE18;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8A38(){
 fn_80066188((int)fn_800B8A60);
}
void fn_800B8A60(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562938,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8AD0,(int)lbl_8047993C,20,(int)fn_800B89E0,(int)fn_800B8AF0,0,0);
}
void *fn_800B8AD0(){return fn_800B89A4();}
void fn_800B8AF0(){
 void *value0=lbl_80562938;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E57C,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80046E58(value2,lbl_8055E59C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDD60;
 fn_800659C0(value0,lbl_8055E584,lbl_8055E58C,lbl_8055E594,value1);
}
void *fn_800B8B7C(){
 char *data=lbl_80477D08;
 if(!lbl_80562944) lbl_80562944=fn_800635C8(data+0x1D04,data+0x1CDC,data+0x1CF0,0x5);
 return lbl_80562944;
}
void *fn_800B8BC8(){
 if(!lbl_80562948) lbl_80562948=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562948;
}
void *fn_800B8C04(){
 if(!lbl_80562948 || !(reinterpret_cast<unsigned int *>(lbl_80562948)[0x24/4]&4)) fn_800B8D58();
 return lbl_80562948;
}
void *fn_800B8C40(){
 UnknownGenObject800B8C40 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CEA0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8D58(){
 fn_80066188((int)fn_800B8D80);
}
void fn_800B8D80(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562948,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8DF8,(int)lbl_80479A28,52,(int)fn_800B8C40,(int)fn_800B8E18,0,(int)lbl_80479A18);
}
void *fn_800B8DF8(){return fn_800B8C04();}
}
#pragma pop
