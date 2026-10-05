#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013B2B0();
void *fn_8013BA10();
void fn_80142038();
void *fn_801420C0();
void fn_8014335C();
void fn_801465FC();
void fn_801527B0();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8049E328[];
extern char lbl_8049E338[];
extern char lbl_8049E344[];
extern char lbl_8049E35C[];
extern char lbl_804A6460[];
extern char lbl_804A9E30[];
extern char lbl_804A9E9C[];
extern char lbl_804A9F00[];
extern char lbl_804AA22C[];
extern char lbl_8055F9A0[8];
extern void *lbl_805621F4;
extern void *lbl_805640A0;
extern void *lbl_805640A4;
extern void *lbl_805640A8;
extern void *lbl_805640AC;
extern void *lbl_805640B0;
void *fn_80142CE4();
void *fn_80142D20();
void fn_80142D90();
void fn_80142DB8();
void *fn_80142E24();
void *fn_80142E44();
void fn_80142E80();
void fn_80142EA8();
void *fn_80142F0C();
void *fn_80142F2C();
void fn_80142F68();
void fn_80142F90();
void *fn_80142FF4();
void *fn_80143050();
void *fn_8014308C();
void fn_801430E4();
void fn_8014310C();
void *fn_80143174();
}
struct UnknownGenObject80142D20 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8014308C {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80142CE4(){
 if(!lbl_805640A0 || !(reinterpret_cast<unsigned int *>(lbl_805640A0)[0x24/4]&4)) fn_80142D90();
 return lbl_805640A0;
}
void *fn_80142D20(){
 UnknownGenObject80142D20 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804A9F00;
 object.unknown00=lbl_804A9E9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142D90(){
 fn_80066188((int)fn_80142DB8);
}
void fn_80142DB8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640A0,(int)fn_8002907C,(int)fn_80024180,(int)fn_80142E24,(int)lbl_8049E328,20,(int)fn_80142D20,0,0,(int)lbl_8055F9A0);
}
void *fn_80142E24(){return fn_80142CE4();}
void *fn_80142E44(){
 if(!lbl_805640A4 || !(reinterpret_cast<unsigned int *>(lbl_805640A4)[0x24/4]&4)) fn_80142E80();
 return lbl_805640A4;
}
void fn_80142E80(){
 fn_80066188((int)fn_80142EA8);
}
void fn_80142EA8(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805640A4,(int)fn_801465FC,(int)fn_801420C0,(int)fn_80142F0C,(int)lbl_8049E338,32,0,0,0,0);
}
void *fn_80142F0C(){return fn_80142E44();}
void *fn_80142F2C(){
 if(!lbl_805640A8 || !(reinterpret_cast<unsigned int *>(lbl_805640A8)[0x24/4]&4)) fn_80142F68();
 return lbl_805640A8;
}
void fn_80142F68(){
 fn_80066188((int)fn_80142F90);
}
void fn_80142F90(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805640A8,(int)fn_801527B0,(int)fn_8013BA10,(int)fn_80142FF4,(int)lbl_8049E344,32,0,0,0,0);
}
void *fn_80142FF4(){return fn_80142F2C();}
void *fn_80143014(){
 if(!lbl_805640AC) lbl_805640AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805640AC;
}
void *fn_80143050(){
 if(!lbl_805640AC || !(reinterpret_cast<unsigned int *>(lbl_805640AC)[0x24/4]&4)) fn_801430E4();
 return lbl_805640AC;
}
void *fn_8014308C(){
 UnknownGenObject8014308C object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 object.unknown00=lbl_804A9E30;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801430E4(){
 fn_80066188((int)fn_8014310C);
}
void fn_8014310C(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805640AC,(int)fn_80142038,(int)fn_8013B2B0,(int)fn_80143174,(int)lbl_8049E35C,32,(int)fn_8014308C,0,0,0);
}
void *fn_80143174(){return fn_80143050();}
void *fn_80143194(){
 if(!lbl_805640B0) lbl_805640B0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805640B0;
}
void *fn_801431D0(){
 if(!lbl_805640B0 || !(reinterpret_cast<unsigned int *>(lbl_805640B0)[0x24/4]&4)) fn_8014335C();
 return lbl_805640B0;
}
}
#pragma pop
