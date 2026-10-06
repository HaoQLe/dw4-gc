#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void fn_800330A8();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8010E280();
void fn_80284294();
void fn_80286FA4();
extern char lbl_80416C68[];
extern char lbl_80416C84[];
extern char lbl_80416C98[];
extern char lbl_80472FA0[];
extern char lbl_80475764[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CB2B4[];
extern char lbl_804CB2BC[];
extern char lbl_804CB2C4[];
extern char lbl_804CB2DC[];
extern char lbl_804CB340[];
extern char lbl_804CB3A4[];
extern char lbl_804CB400[];
extern void *lbl_80515D30;
extern void *lbl_80515D34;
extern void *lbl_80515D38;
extern void *lbl_805621F4;
void *fn_80286A50();
void *fn_80286A9C();
void fn_80286C0C();
void fn_80286C34();
void *fn_80286CA8();
void *fn_80286D1C();
void *fn_80286D68();
void fn_80286DDC();
void fn_80286E04();
void *fn_80286E78();
void *fn_80286E98();
void fn_80286EE4();
void fn_80286F0C();
void *fn_80286F84();
}
struct UnknownGenRoot80286A9C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80286A9C(){fn_8006665C(this);}
};
struct UnknownGenObject80286A9C_0 : UnknownGenRoot80286A9C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject80286A9C_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject80286A9C_1 : UnknownGenObject80286A9C_0 {
 inline ~UnknownGenObject80286A9C_1(){unknown00=lbl_804CB400;}
};
struct UnknownGenObject80286A9C : UnknownGenObject80286A9C_1 {
 char unknown18[16];
 inline ~UnknownGenObject80286A9C(){unknown00=lbl_804CB3A4;}
};
struct UnknownGenObject80286D68_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802869FC(){
 if(!lbl_80515D30) lbl_80515D30=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D30;
}
void *fn_80286A50(){
 if(!lbl_80515D30 || !(reinterpret_cast<unsigned int *>(lbl_80515D30)[0x24/4]&4)) fn_80286C0C();
 return lbl_80515D30;
}
void *fn_80286A9C(){
 UnknownGenObject80286A9C object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_804CB400;
 object.unknown00=lbl_804CB3A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80286C0C(){
 fn_80066188((int)fn_80286C34);
}
void fn_80286C34(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D30,(int)fn_800330A8,(int)fn_8010E280,(int)fn_80286CA8,(int)lbl_80416C68,28,(int)fn_80286A9C,0,0,(int)lbl_804CB2B4);
}
void *fn_80286CA8(){return fn_80286A50();}
void *fn_80286CC8(){
 if(!lbl_80515D34) lbl_80515D34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515D34;
}
void *fn_80286D1C(){
 if(!lbl_80515D34 || !(reinterpret_cast<unsigned int *>(lbl_80515D34)[0x24/4]&4)) fn_80286DDC();
 return lbl_80515D34;
}
void *fn_80286D68(){
 UnknownGenObject80286D68_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB340;
 object.unknown00=lbl_804CB2DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80286DDC(){
 fn_80066188((int)fn_80286E04);
}
void fn_80286E04(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515D34,(int)fn_8002907C,(int)fn_80024180,(int)fn_80286E78,(int)lbl_80416C84,20,(int)fn_80286D68,0,0,(int)lbl_804CB2BC);
}
void *fn_80286E78(){return fn_80286D1C();}
void *fn_80286E98(){
 if(!lbl_80515D38 || !(reinterpret_cast<unsigned int *>(lbl_80515D38)[0x24/4]&4)) fn_80286EE4();
 return lbl_80515D38;
}
void fn_80286EE4(){
 fn_80066188((int)fn_80286F0C);
}
void fn_80286F0C(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515D38,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_80286F84,(int)lbl_80416C98,16,0,(int)fn_80286FA4,0,(int)lbl_804CB2C4);
}
void *fn_80286F84(){return fn_80286E98();}
}
#pragma pop
