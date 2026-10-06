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
void fn_800D4338();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8048A0CC[];
extern char lbl_8048A0E4[];
extern char lbl_80493538[];
extern char lbl_80493594[];
extern char lbl_804935F8[];
extern char lbl_8055EC78[8];
extern char lbl_8055EC80[8];
extern void *lbl_805621F4;
extern void *lbl_8056303C;
extern void *lbl_80563040;
void *fn_800D4000();
void *fn_800D403C();
void fn_800D40AC();
void fn_800D40D4();
void *fn_800D4140();
void *fn_800D4160();
void *fn_800D419C();
void fn_800D427C();
void fn_800D42A4();
void *fn_800D4318();
}
struct UnknownGenObject800D403C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800D419C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D419C(){fn_8006665C(this);}
};
struct UnknownGenObject800D419C_0 : UnknownGenRoot800D419C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D419C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800D419C : UnknownGenObject800D419C_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject800D419C(){unknown00=lbl_80493538;}
};
extern "C" {
void *fn_800D3FC4(){
 if(!lbl_8056303C) lbl_8056303C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056303C;
}
void *fn_800D4000(){
 if(!lbl_8056303C || !(reinterpret_cast<unsigned int *>(lbl_8056303C)[0x24/4]&4)) fn_800D40AC();
 return lbl_8056303C;
}
void *fn_800D403C(){
 UnknownGenObject800D403C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804935F8;
 object.unknown00=lbl_80493594;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D40AC(){
 fn_80066188((int)fn_800D40D4);
}
void fn_800D40D4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056303C,(int)fn_8002907C,(int)fn_80024180,(int)fn_800D4140,(int)lbl_8048A0CC,20,(int)fn_800D403C,0,0,(int)lbl_8055EC78);
}
void *fn_800D4140(){return fn_800D4000();}
void *fn_800D4160(){
 if(!lbl_80563040 || !(reinterpret_cast<unsigned int *>(lbl_80563040)[0x24/4]&4)) fn_800D427C();
 return lbl_80563040;
}
void *fn_800D419C(){
 UnknownGenObject800D419C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80493538;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D427C(){
 fn_80066188((int)fn_800D42A4);
}
void fn_800D42A4(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563040,(int)fn_80029D58,(int)fn_80023CF4,(int)fn_800D4318,(int)lbl_8048A0E4,20,(int)fn_800D419C,(int)fn_800D4338,0,(int)lbl_8055EC80);
}
void *fn_800D4318(){return fn_800D4160();}
}
#pragma pop
