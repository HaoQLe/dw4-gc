#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024D1C();
void *fn_800284F4();
void fn_80029D58();
void fn_80033A14();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_802176F4();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80480AF8[];
extern char lbl_80480B58[];
extern char lbl_80493DD4[];
extern char lbl_804BA470[];
extern char lbl_804BA47C[];
extern char lbl_804BA4BC[];
extern char lbl_80560BC0[8];
extern char lbl_80560BC8[8];
extern char lbl_80560BD0[8];
extern char lbl_80560BD8[8];
extern void *lbl_805622A4;
extern void *lbl_80565A18;
extern void *lbl_80565A28;
void *fn_802172F0();
void *fn_8021732C();
void fn_80217444();
void fn_8021746C();
void *fn_802174E4();
void fn_80217504();
void *fn_802175A8();
void *fn_802175E4();
void fn_8021763C();
void fn_80217664();
void *fn_802176D4();
}
struct UnknownGenRoot8021732C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8021732C(){fn_8006665C(this);}
};
struct UnknownGenObject8021732C_0 : UnknownGenRoot8021732C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8021732C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8021732C : UnknownGenObject8021732C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject8021732C(){unknown00=lbl_80493DD4;}
};
struct UnknownGenObject802175E4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802172F0(){
 if(!lbl_80565A18 || !(reinterpret_cast<unsigned int *>(lbl_80565A18)[0x24/4]&4)) fn_80217444();
 return lbl_80565A18;
}
void *fn_8021732C(){
 UnknownGenObject8021732C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493DD4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80217444(){
 fn_80066188((int)fn_8021746C);
}
void fn_8021746C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A18,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_802174E4,(int)lbl_804BA47C,20,(int)fn_8021732C,(int)fn_80217504,0,(int)lbl_804BA470);
}
void *fn_802174E4(){return fn_802172F0();}
void fn_80217504(){
 void *value0=lbl_80565A18;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560BC0,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800284F4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=lbl_805622A4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+38)=0;
 fn_800659C0(value0,lbl_80560BC8,lbl_80560BD0,lbl_80560BD8,value1);
}
void *fn_802175A8(){
 if(!lbl_80565A28 || !(reinterpret_cast<unsigned int *>(lbl_80565A28)[0x24/4]&4)) fn_8021763C();
 return lbl_80565A28;
}
void *fn_802175E4(){
 UnknownGenObject802175E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80480B58;
 object.unknown00=lbl_80480AF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021763C(){
 fn_80066188((int)fn_80217664);
}
void fn_80217664(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A28,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_802176D4,(int)lbl_804BA4BC,20,(int)fn_802175E4,(int)fn_802176F4,0,0);
}
void *fn_802176D4(){return fn_802175A8();}
}
#pragma pop
