#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
void fn_80284294();
void fn_802852BC();
extern char lbl_804169E0[];
extern char lbl_804169EC[];
extern char lbl_80416A04[];
extern char lbl_80416A18[];
extern char lbl_80416A2C[];
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804CB084[];
extern char lbl_804CB08C[];
extern char lbl_804CB094[];
extern char lbl_804CB79C[];
extern char lbl_804CB7FC[];
extern char lbl_804CB860[];
extern char lbl_804CB8C4[];
extern char lbl_804CB928[];
extern char lbl_804CBB90[];
extern void *lbl_80515C84;
extern void *lbl_80515C88;
extern void *lbl_80515C8C;
extern void *lbl_80515C90;
extern void *lbl_80515C94;
extern void *lbl_805621F4;
void *fn_80284AB8();
void *fn_80284B04();
void fn_80284B4C();
void fn_80284B74();
void *fn_80284BE0();
void *fn_80284C54();
void *fn_80284CA0();
void fn_80284D14();
void fn_80284D3C();
void *fn_80284DB0();
void *fn_80284DD0();
void fn_80284E1C();
void fn_80284E44();
void *fn_80284EAC();
void *fn_80284F20();
void *fn_80284F6C();
void fn_80284FE0();
void fn_80285008();
void *fn_8028507C();
void *fn_802850DC();
void *fn_80285128();
void fn_802851F8();
void fn_80285220();
void *fn_8028529C();
}
struct UnknownGenObject80284B04_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenObject80284CA0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80284F6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80285128 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80285128(){fn_8006665C(this);}
};
struct UnknownGenObject80285128 : UnknownGenRoot80285128 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject80285128(){unknown00=lbl_804CB79C;}
};
extern "C" {
void *fn_80284AB8(){
 if(!lbl_80515C84 || !(reinterpret_cast<unsigned int *>(lbl_80515C84)[0x24/4]&4)) fn_80284B4C();
 return lbl_80515C84;
}
void *fn_80284B04(){
 UnknownGenObject80284B04_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804CBB90;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284B4C(){
 fn_80066188((int)fn_80284B74);
}
void fn_80284B74(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C84,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80284BE0,(int)lbl_804169E0,8,(int)fn_80284B04,0,0,0);
}
void *fn_80284BE0(){return fn_80284AB8();}
void *fn_80284C00(){
 if(!lbl_80515C88) lbl_80515C88=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C88;
}
void *fn_80284C54(){
 if(!lbl_80515C88 || !(reinterpret_cast<unsigned int *>(lbl_80515C88)[0x24/4]&4)) fn_80284D14();
 return lbl_80515C88;
}
void *fn_80284CA0(){
 UnknownGenObject80284CA0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB928;
 object.unknown00=lbl_804CB8C4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284D14(){
 fn_80066188((int)fn_80284D3C);
}
void fn_80284D3C(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C88,(int)fn_8002907C,(int)fn_80024180,(int)fn_80284DB0,(int)lbl_804169EC,20,(int)fn_80284CA0,0,0,(int)lbl_804CB084);
}
void *fn_80284DB0(){return fn_80284C54();}
void *fn_80284DD0(){
 if(!lbl_80515C8C || !(reinterpret_cast<unsigned int *>(lbl_80515C8C)[0x24/4]&4)) fn_80284E1C();
 return lbl_80515C8C;
}
void fn_80284E1C(){
 fn_80066188((int)fn_80284E44);
}
void fn_80284E44(){
 fn_80284294();
 fn_80066204(1,(int)&lbl_80515C8C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80284EAC,(int)lbl_80416A04,8,0,0,0,0);
}
void *fn_80284EAC(){return fn_80284DD0();}
void *fn_80284ECC(){
 if(!lbl_80515C90) lbl_80515C90=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80515C90;
}
void *fn_80284F20(){
 if(!lbl_80515C90 || !(reinterpret_cast<unsigned int *>(lbl_80515C90)[0x24/4]&4)) fn_80284FE0();
 return lbl_80515C90;
}
void *fn_80284F6C(){
 UnknownGenObject80284F6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804CB860;
 object.unknown00=lbl_804CB7FC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80284FE0(){
 fn_80066188((int)fn_80285008);
}
void fn_80285008(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C90,(int)fn_8002907C,(int)fn_80024180,(int)fn_8028507C,(int)lbl_80416A18,20,(int)fn_80284F6C,0,0,(int)lbl_804CB08C);
}
void *fn_8028507C(){return fn_80284F20();}
void *fn_8028509C(void *object){
 fn_802851F8();
 return fn_8006546C(lbl_80515C94,object);
}
void *fn_802850DC(){
 if(!lbl_80515C94 || !(reinterpret_cast<unsigned int *>(lbl_80515C94)[0x24/4]&4)) fn_802851F8();
 return lbl_80515C94;
}
void *fn_80285128(){
 UnknownGenObject80285128 object;
 object.unknown00=lbl_804CB79C;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802851F8(){
 fn_80066188((int)fn_80285220);
}
void fn_80285220(){
 fn_80284294();
 fn_80066204(0,(int)&lbl_80515C94,(int)fn_80066B08,(int)fn_800237D0,(int)fn_8028529C,(int)lbl_80416A2C,16,(int)fn_80285128,(int)fn_802852BC,0,(int)lbl_804CB094);
}
void *fn_8028529C(){return fn_802850DC();}
}
#pragma pop
