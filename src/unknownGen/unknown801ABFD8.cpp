#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void fn_8002907C();
void fn_80029694();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800CB530();
void fn_801AA6DC();
void fn_801AC8A8();
void fn_80217664();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_80480AF8[];
extern char lbl_80480B58[];
extern char lbl_804AB89C[];
extern char lbl_804AB8BC[];
extern char lbl_804AB8D0[];
extern char lbl_804AB8E0[];
extern char lbl_804B9B58[];
extern char lbl_804B9BB8[];
extern char lbl_804B9CD8[];
extern char lbl_804B9D3C[];
extern char lbl_804B9DA0[];
extern char lbl_804B9E04[];
extern char lbl_804B9ECC[];
extern char lbl_804B9F30[];
extern char lbl_80560110[8];
extern char lbl_80560118[8];
extern char lbl_80560120[8];
extern char lbl_80560128[8];
extern void *lbl_805621F4;
extern void *lbl_80564704;
extern void *lbl_80564708;
extern void *lbl_8056470C;
extern void *lbl_80564710;
extern void *lbl_80564714;
void *fn_801AC014();
void *fn_801AC050();
void fn_801AC0C0();
void fn_801AC0E8();
void *fn_801AC154();
void *fn_801AC174();
void *fn_801AC1B0();
void fn_801AC220();
void fn_801AC248();
void *fn_801AC2B4();
void *fn_801AC310();
void *fn_801AC34C();
void fn_801AC3BC();
void fn_801AC3E4();
void *fn_801AC450();
void *fn_801AC4AC();
void *fn_801AC4E8();
void fn_801AC558();
void fn_801AC580();
void *fn_801AC5EC();
}
struct UnknownGenObject801AC050 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC1B0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC34C {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC4E8 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801ABFD8(){
 if(!lbl_80564704) lbl_80564704=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564704;
}
void *fn_801AC014(){
 if(!lbl_80564704 || !(reinterpret_cast<unsigned int *>(lbl_80564704)[0x24/4]&4)) fn_801AC0C0();
 return lbl_80564704;
}
void *fn_801AC050(){
 UnknownGenObject801AC050 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B9F30;
 object.unknown00=lbl_804B9ECC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC0C0(){
 fn_80066188((int)fn_801AC0E8);
}
void fn_801AC0E8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564704,(int)fn_80029694,(int)fn_80023FDC,(int)fn_801AC154,(int)lbl_804AB89C,20,(int)fn_801AC050,0,0,(int)lbl_80560110);
}
void *fn_801AC154(){return fn_801AC014();}
void *fn_801AC174(){
 if(!lbl_80564708 || !(reinterpret_cast<unsigned int *>(lbl_80564708)[0x24/4]&4)) fn_801AC220();
 return lbl_80564708;
}
void *fn_801AC1B0(){
 UnknownGenObject801AC1B0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9E04;
 object.unknown00=lbl_804B9DA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC220(){
 fn_80066188((int)fn_801AC248);
}
void fn_801AC248(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564708,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AC2B4,(int)lbl_804AB8BC,20,(int)fn_801AC1B0,0,0,(int)lbl_80560118);
}
void *fn_801AC2B4(){return fn_801AC174();}
void *fn_801AC2D4(){
 if(!lbl_8056470C) lbl_8056470C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056470C;
}
void *fn_801AC310(){
 if(!lbl_8056470C || !(reinterpret_cast<unsigned int *>(lbl_8056470C)[0x24/4]&4)) fn_801AC3BC();
 return lbl_8056470C;
}
void *fn_801AC34C(){
 UnknownGenObject801AC34C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9D3C;
 object.unknown00=lbl_804B9CD8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC3BC(){
 fn_80066188((int)fn_801AC3E4);
}
void fn_801AC3E4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056470C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AC450,(int)lbl_804AB8D0,20,(int)fn_801AC34C,0,0,(int)lbl_80560120);
}
void *fn_801AC450(){return fn_801AC310();}
void *fn_801AC470(){
 if(!lbl_80564710) lbl_80564710=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564710;
}
void *fn_801AC4AC(){
 if(!lbl_80564710 || !(reinterpret_cast<unsigned int *>(lbl_80564710)[0x24/4]&4)) fn_801AC558();
 return lbl_80564710;
}
void *fn_801AC4E8(){
 UnknownGenObject801AC4E8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80480B58;
 object.unknown00=lbl_80480AF8;
 object.unknown00=lbl_804B9BB8;
 object.unknown00=lbl_804B9B58;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC558(){
 fn_80066188((int)fn_801AC580);
}
void fn_801AC580(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564710,(int)fn_80217664,(int)fn_800CB530,(int)fn_801AC5EC,(int)lbl_804AB8E0,20,(int)fn_801AC4E8,0,0,(int)lbl_80560128);
}
void *fn_801AC5EC(){return fn_801AC4AC();}
void *fn_801AC60C(void *object){
 fn_801AC8A8();
 return fn_8006546C(lbl_80564714,object);
}
void *fn_801AC644(){
 if(!lbl_80564714) lbl_80564714=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564714;
}
void *fn_801AC680(){
 if(!lbl_80564714 || !(reinterpret_cast<unsigned int *>(lbl_80564714)[0x24/4]&4)) fn_801AC8A8();
 return lbl_80564714;
}
}
#pragma pop
