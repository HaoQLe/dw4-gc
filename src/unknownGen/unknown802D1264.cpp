#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8006665C(void *);
extern char lbl_8047650C[];
extern char lbl_804CBA60[];
extern char lbl_804DD724[];
extern char lbl_804DE8E4[];
}
struct UnknownGenRoot802D1264 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802D1264(){fn_8006665C(this);}
};
struct UnknownGenObject802D1264_0 : UnknownGenRoot802D1264 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject802D1264_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject802D1264_1 : UnknownGenObject802D1264_0 {
 inline ~UnknownGenObject802D1264_1(){unknown00=lbl_804CBA60;}
};
struct UnknownGenObject802D1264_2 : UnknownGenObject802D1264_1 {
 char unknown0C[12];
 UnknownGenRefMember unknown18;
 inline ~UnknownGenObject802D1264_2(){unknown00=lbl_804DD724;}
};
struct UnknownGenObject802D1264 : UnknownGenObject802D1264_2 {
 char unknown1C[28];
 UnknownGenRefMember unknown38;
 UnknownGenRefMember unknown3C;
 char unknown40[8];
 inline ~UnknownGenObject802D1264(){unknown00=lbl_804DE8E4;}
};
extern "C" {
void *fn_802D1264(){
 UnknownGenObject802D1264 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804CBA60;
 object.unknown00=lbl_804DD724;
 object.unknown18.value=0;
 object.unknown00=lbl_804DE8E4;
 object.unknown38.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
}
#pragma pop
