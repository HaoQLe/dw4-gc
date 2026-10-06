#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_80143C60();
void *fn_80143FCC();
void fn_8014483C();
extern char lbl_8049E5EC[];
extern char lbl_804A9AD4[];
extern char lbl_804A9C44[];
extern char lbl_8055F9F8[8];
extern void *lbl_80564118;
void *fn_801446B0();
void *fn_801446EC();
void fn_80144780();
void fn_801447A8();
void *fn_8014481C();
}
struct UnknownGenRoot801446EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801446EC(){fn_8006665C(this);}
};
struct UnknownGenObject801446EC : UnknownGenRoot801446EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801446EC(){unknown00=lbl_804A9AD4;}
};
extern "C" {
void *fn_80144678(void *object){
 fn_80144780();
 return fn_8006546C(lbl_80564118,object);
}
void *fn_801446B0(){
 if(!lbl_80564118 || !(reinterpret_cast<unsigned int *>(lbl_80564118)[0x24/4]&4)) fn_80144780();
 return lbl_80564118;
}
void *fn_801446EC(){
 UnknownGenObject801446EC object;
 object.unknown00=lbl_804A9C44;
 object.unknown00=lbl_804A9AD4;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80144780(){
 fn_80066188((int)fn_801447A8);
}
void fn_801447A8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564118,(int)fn_80143C60,(int)fn_80143FCC,(int)fn_8014481C,(int)lbl_8049E5EC,16,(int)fn_801446EC,(int)fn_8014483C,0,(int)lbl_8055F9F8);
}
void *fn_8014481C(){return fn_801446B0();}
}
#pragma pop
