#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8002DAE4();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_804653B0[];
extern char lbl_804653C0[];
extern char lbl_804653D0[];
extern char lbl_80472FA0[];
extern char lbl_80475D0C[];
extern char lbl_80475D70[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D38C[8];
extern void *lbl_805619BC;
extern void *lbl_805619C0;
extern void *lbl_805619C4;
extern void *lbl_805621F4;
void *fn_8002D770();
void fn_8002D7AC();
void fn_8002D7D4();
void *fn_8002D838();
void *fn_8002D894();
void *fn_8002D8D0();
void fn_8002D940();
void fn_8002D968();
void *fn_8002D9D4();
void *fn_8002D9F4();
void fn_8002DA30();
void fn_8002DA58();
void *fn_8002DAC4();
}
struct UnknownGenObject8002D8D0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002D734(){
 if(!lbl_805619BC) lbl_805619BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619BC;
}
void *fn_8002D770(){
 if(!lbl_805619BC || !(reinterpret_cast<unsigned int *>(lbl_805619BC)[0x24/4]&4)) fn_8002D7AC();
 return lbl_805619BC;
}
void fn_8002D7AC(){
 fn_80066188((int)fn_8002D7D4);
}
void fn_8002D7D4(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805619BC,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002D838,(int)lbl_804653B0,8,0,0,0,0);
}
void *fn_8002D838(){return fn_8002D770();}
void *fn_8002D858(){
 if(!lbl_805619C0) lbl_805619C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805619C0;
}
void *fn_8002D894(){
 if(!lbl_805619C0 || !(reinterpret_cast<unsigned int *>(lbl_805619C0)[0x24/4]&4)) fn_8002D940();
 return lbl_805619C0;
}
void *fn_8002D8D0(){
 UnknownGenObject8002D8D0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475D70;
 object.unknown00=lbl_80475D0C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002D940(){
 fn_80066188((int)fn_8002D968);
}
void fn_8002D968(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_805619C0,(int)fn_8002907C,(int)fn_80024180,(int)fn_8002D9D4,(int)lbl_804653C0,20,(int)fn_8002D8D0,0,0,(int)lbl_8055D38C);
}
void *fn_8002D9D4(){return fn_8002D894();}
void *fn_8002D9F4(){
 if(!lbl_805619C4 || !(reinterpret_cast<unsigned int *>(lbl_805619C4)[0x24/4]&4)) fn_8002DA30();
 return lbl_805619C4;
}
void fn_8002DA30(){
 fn_80066188((int)fn_8002DA58);
}
void fn_8002DA58(){
 fn_80021B94();
 fn_80066204(1,(int)&lbl_805619C4,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8002DAC4,(int)lbl_804653D0,12,0,(int)fn_8002DAE4,0,0);
}
void *fn_8002DAC4(){return fn_8002D9F4();}
}
#pragma pop
