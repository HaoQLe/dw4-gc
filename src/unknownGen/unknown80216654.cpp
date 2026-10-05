#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_802167DC();
extern char lbl_80472FA0[];
extern char lbl_804BA2C8[];
extern char lbl_804BCDC0[];
extern char lbl_804BCE20[];
extern void *lbl_805621F4;
extern void *lbl_805659C4;
void *fn_80216690();
void *fn_802166CC();
void fn_80216724();
void fn_8021674C();
void *fn_802167BC();
}
struct UnknownGenObject802166CC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80216654(){
 if(!lbl_805659C4) lbl_805659C4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805659C4;
}
void *fn_80216690(){
 if(!lbl_805659C4 || !(reinterpret_cast<unsigned int *>(lbl_805659C4)[0x24/4]&4)) fn_80216724();
 return lbl_805659C4;
}
void *fn_802166CC(){
 UnknownGenObject802166CC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_804BCE20;
 object.unknown00=lbl_804BCDC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80216724(){
 fn_80066188((int)fn_8021674C);
}
void fn_8021674C(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_805659C4,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_802167BC,(int)lbl_804BA2C8,20,(int)fn_802166CC,(int)fn_802167DC,0,0);
}
void *fn_802167BC(){return fn_80216690();}
}
#pragma pop
