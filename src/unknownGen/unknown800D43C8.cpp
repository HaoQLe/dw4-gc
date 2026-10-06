#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void fn_8002907C();
void fn_80029D58();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D46F0();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A108[];
extern char lbl_8048A124[];
extern char lbl_80493414[];
extern char lbl_80493470[];
extern char lbl_804934D4[];
extern char lbl_8055ECB0[8];
extern void *lbl_805621F4;
extern void *lbl_8056304C;
extern void *lbl_80563050;
void *fn_800D4404();
void *fn_800D4440();
void fn_800D44B0();
void fn_800D44D8();
void *fn_800D4544();
void *fn_800D4564();
void *fn_800D45A0();
void fn_800D4638();
void fn_800D4660();
void *fn_800D46D0();
}
struct UnknownGenObject800D4440_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D45A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D45A0(){fn_8006665C(this);}
};
struct UnknownGenObject800D45A0_0 : UnknownGenRoot800D45A0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D45A0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D45A0 : UnknownGenObject800D45A0_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D45A0(){unknown00=lbl_80493414;}
};
extern "C" {
void *fn_800D43C8(){
 if(!lbl_8056304C) lbl_8056304C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056304C;
}
void *fn_800D4404(){
 if(!lbl_8056304C || !(reinterpret_cast<unsigned int *>(lbl_8056304C)[0x24/4]&4)) fn_800D44B0();
 return lbl_8056304C;
}
void *fn_800D4440(){
 UnknownGenObject800D4440_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804934D4;
 object.unknown00=lbl_80493470;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D44B0(){
 fn_80066188((int)fn_800D44D8);
}
void fn_800D44D8(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056304C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D4544,(int)lbl_8048A108,20,(int)fn_800D4440,0,0,(int)lbl_8055ECB0);
}
void *fn_800D4544(){return fn_800D4404();}
void *fn_800D4564(){
 if(!lbl_80563050 || !(reinterpret_cast<unsigned int *>(lbl_80563050)[0x24/4]&4)) fn_800D4638();
 return lbl_80563050;
}
void *fn_800D45A0(){
 UnknownGenObject800D45A0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493414;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D4638(){
 fn_80066188((int)fn_800D4660);
}
void fn_800D4660(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563050,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D46D0,(int)lbl_8048A124,24,(int)fn_800D45A0,(int)fn_800D46F0,0,0);
}
void *fn_800D46D0(){return fn_800D4564();}
}
#pragma pop
