#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_800330A8();
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void fn_8010E37C();
extern char lbl_80475764[];
extern char lbl_80494860[];
extern char lbl_80494880[];
extern char lbl_804948A8[];
extern char lbl_80495DC0[];
extern char lbl_80497B88[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char lbl_8055EF4C[4];
extern char lbl_8055EF50[4];
extern char lbl_8055EF54[4];
extern char lbl_8055EF58[4];
extern char lbl_8055EF5C[8];
extern char lbl_8055EF64[8];
extern void *lbl_80561D14;
extern void *lbl_805621F4;
extern void *lbl_805635D0;
extern void *lbl_805635D8;
extern void *lbl_805635E0;
void *fn_8010DE00();
void *fn_8010DE3C();
void fn_8010DED4();
void fn_8010DEFC();
void *fn_8010DF6C();
void *fn_8010DF8C();
void fn_8010DF94();
void *fn_8010E038();
void *fn_8010E074();
void fn_8010E1CC();
void fn_8010E1F4();
void *fn_8010E260();
void *fn_8010E280();
void *fn_8010E288();
void fn_8010E2C4();
void fn_8010E2EC();
void *fn_8010E35C();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){fn_8006665C(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=lbl_80495DC0;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){fn_8006665C(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=lbl_80475764;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=lbl_80497B88;}
};
extern "C" {
void *fn_8010DDC4(){
 if(!lbl_805635D0) lbl_805635D0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635D0;
}
void *fn_8010DE00(){
 if(!lbl_805635D0 || !(reinterpret_cast<unsigned int *>(lbl_805635D0)[0x24/4]&4)) fn_8010DED4();
 return lbl_805635D0;
}
void *fn_8010DE3C(){
 UnknownGenObject8010DE3C object;
 object.unknown00=lbl_80497C9C;
 object.unknown08.value=0;
 object.unknown00=lbl_80495DC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010DED4(){
 fn_80066188((int)fn_8010DEFC);
}
void fn_8010DEFC(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635D0,(int)fn_8010E2EC,(int)fn_8010DF8C,(int)fn_8010DF6C,(int)lbl_80494860,16,(int)fn_8010DE3C,(int)fn_8010DF94,0,0);
}
void *fn_8010DF6C(){return fn_8010DE00();}
void *fn_8010DF8C(){return lbl_805635E0;}
void fn_8010DF94(){
 void *value0=lbl_805635D0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EF4C,1);
 fn_800659C0(value0,lbl_8055EF50,lbl_8055EF54,lbl_8055EF58,value1);
}
void *fn_8010DFFC(){
 if(!lbl_805635D8) lbl_805635D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805635D8;
}
void *fn_8010E038(){
 if(!lbl_805635D8 || !(reinterpret_cast<unsigned int *>(lbl_805635D8)[0x24/4]&4)) fn_8010E1CC();
 return lbl_805635D8;
}
void *fn_8010E074(){
 UnknownGenObject8010E074 object;
 object.unknown00=lbl_80475764;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=lbl_80497BE4;
 object.unknown00=lbl_80497B88;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8010E1CC(){
 fn_80066188((int)fn_8010E1F4);
}
void fn_8010E1F4(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805635D8,(int)fn_800330A8,(int)fn_8010E280,(int)fn_8010E260,(int)lbl_80494880,28,(int)fn_8010E074,0,0,(int)lbl_8055EF5C);
}
void *fn_8010E260(){return fn_8010E038();}
void *fn_8010E280(){return lbl_80561D14;}
void *fn_8010E288(){
 if(!lbl_805635E0 || !(reinterpret_cast<unsigned int *>(lbl_805635E0)[0x24/4]&4)) fn_8010E2C4();
 return lbl_805635E0;
}
void fn_8010E2C4(){
 fn_80066188((int)fn_8010E2EC);
}
void fn_8010E2EC(){
 fn_8010CBD4();
 fn_80066204(1,(int)&lbl_805635E0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8010E35C,(int)lbl_804948A8,12,0,(int)fn_8010E37C,0,(int)lbl_8055EF64);
}
void *fn_8010E35C(){return fn_8010E288();}
}
#pragma pop
