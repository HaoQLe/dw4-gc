#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_800330A8();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_8010CBD4();
void *fn_8010E280();
void *fn_80112B04();
void fn_80112B40();
void fn_80113008();
extern char lbl_80495364[];
extern char lbl_80495380[];
extern char lbl_80497724[];
extern char lbl_8055F17C[8];
extern void *lbl_805621F4;
extern void *lbl_805637B4;
extern void *lbl_805637B8;
extern void *lbl_805637BC;
void fn_80112CC0();
void *fn_80112D2C();
void *fn_80112D4C();
void *fn_80112D88();
void fn_80112DC8();
void fn_80112DF0();
void *fn_80112E58();
}
struct UnknownGenObject80112D88_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void fn_80112C98(){
 fn_80066188((int)fn_80112CC0);
}
void fn_80112CC0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637B4,(int)fn_800330A8,(int)fn_8010E280,(int)fn_80112D2C,(int)lbl_80495364,28,(int)fn_80112B40,0,0,(int)lbl_8055F17C);
}
void *fn_80112D2C(){return fn_80112B04();}
void *fn_80112D4C(){
 if(!lbl_805637B8 || !(reinterpret_cast<unsigned int *>(lbl_805637B8)[0x24/4]&4)) fn_80112DC8();
 return lbl_805637B8;
}
void *fn_80112D88(){
 UnknownGenObject80112D88_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80497724;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80112DC8(){
 fn_80066188((int)fn_80112DF0);
}
void fn_80112DF0(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805637B8,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80112E58,(int)lbl_80495380,8,(int)fn_80112D88,0,0,0);
}
void *fn_80112E58(){return fn_80112D4C();}
void *fn_80112E78(){
 if(!lbl_805637BC) lbl_805637BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805637BC;
}
void *fn_80112EB4(){
 if(!lbl_805637BC || !(reinterpret_cast<unsigned int *>(lbl_805637BC)[0x24/4]&4)) fn_80113008();
 return lbl_805637BC;
}
}
#pragma pop
