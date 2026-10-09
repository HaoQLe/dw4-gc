#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023FDC();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800CB530();
void *fn_8011148C();
void fn_801AA6DC();
void fn_801AC8A8();
void igGroup_register();
void igNonRefCountedObjectList_register();
void igNonRefCountedObjectStack_register();
void igObjectList_register();
void *igTransformRecorder_getMeta();
void igTransformRecorder_vtableRead();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476DA8[];
extern char lbl_80476E0C[];
extern char lbl_80480AF8[];
extern char lbl_80480B58[];
extern char lbl_804AB888[];
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
extern char lbl_805600E4[8];
extern char lbl_805600F8[8];
extern char lbl_80560100[8];
extern char lbl_80560108[8];
extern char lbl_80560110[8];
extern char lbl_80560118[8];
extern char lbl_80560120[8];
extern char lbl_80560128[8];
extern void *lbl_805621F4;
extern void *lbl_805646F8;
extern void *lbl_80564704;
extern void *lbl_80564708;
extern void *lbl_8056470C;
extern void *lbl_80564710;
extern void *lbl_80564714;
void igTransformRecorder_register();
void *igTransformRecorder_getMetaCall();
void igTransformRecorder_fieldInit();
void *igNonRefCountedTransformList_getMeta();
void *igNonRefCountedTransformList_vtableRead();
void fn_801AC0C0();
void igNonRefCountedTransformList_register();
void *igNonRefCountedTransformList_getMetaCall();
void *igTransformListList_getMeta();
void *igTransformListList_vtableRead();
void fn_801AC220();
void igTransformListList_register();
void *igTransformListList_getMetaCall();
void *igTransformList_getMeta();
void *igTransformList_vtableRead();
void fn_801AC3BC();
void igTransformList_register();
void *igTransformList_getMetaCall();
void *igTransformStack_getMeta();
void *igTransformStack_vtableRead();
void fn_801AC558();
void igTransformStack_register();
void *igTransformStack_getMetaCall();
}
struct UnknownGenObject801AC050_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC1B0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC34C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801AC4E8_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_801ABEB8(){
 fn_80066188((int)igTransformRecorder_register);
}
void igTransformRecorder_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805646F8,(int)igGroup_register,(int)fn_8011148C,(int)igTransformRecorder_getMetaCall,(int)lbl_804AB888,160,(int)igTransformRecorder_vtableRead,(int)igTransformRecorder_fieldInit,0,0);
}
void *igTransformRecorder_getMetaCall(){return igTransformRecorder_getMeta();}
void igTransformRecorder_fieldInit(){
 void *value0=lbl_805646F8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805600E4,2);
 fn_800659C0(value0,lbl_805600F8,lbl_80560100,lbl_80560108,value1);
}
void *fn_801ABFD8(){
 if(!lbl_80564704) lbl_80564704=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564704;
}
void *igNonRefCountedTransformList_getMeta(){
 if(!lbl_80564704 || !(reinterpret_cast<unsigned int *>(lbl_80564704)[0x24/4]&4)) fn_801AC0C0();
 return lbl_80564704;
}
void *igNonRefCountedTransformList_vtableRead(){
 UnknownGenObject801AC050_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476DA8;
 object.unknown00=lbl_804B9F30;
 object.unknown00=lbl_804B9ECC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC0C0(){
 fn_80066188((int)igNonRefCountedTransformList_register);
}
void igNonRefCountedTransformList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564704,(int)igNonRefCountedObjectList_register,(int)fn_80023FDC,(int)igNonRefCountedTransformList_getMetaCall,(int)lbl_804AB89C,20,(int)igNonRefCountedTransformList_vtableRead,0,0,(int)lbl_80560110);
}
void *igNonRefCountedTransformList_getMetaCall(){return igNonRefCountedTransformList_getMeta();}
void *igTransformListList_getMeta(){
 if(!lbl_80564708 || !(reinterpret_cast<unsigned int *>(lbl_80564708)[0x24/4]&4)) fn_801AC220();
 return lbl_80564708;
}
void *igTransformListList_vtableRead(){
 UnknownGenObject801AC1B0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9E04;
 object.unknown00=lbl_804B9DA0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC220(){
 fn_80066188((int)igTransformListList_register);
}
void igTransformListList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564708,(int)igObjectList_register,(int)fn_80024180,(int)igTransformListList_getMetaCall,(int)lbl_804AB8BC,20,(int)igTransformListList_vtableRead,0,0,(int)lbl_80560118);
}
void *igTransformListList_getMetaCall(){return igTransformListList_getMeta();}
void *fn_801AC2D4(){
 if(!lbl_8056470C) lbl_8056470C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056470C;
}
void *igTransformList_getMeta(){
 if(!lbl_8056470C || !(reinterpret_cast<unsigned int *>(lbl_8056470C)[0x24/4]&4)) fn_801AC3BC();
 return lbl_8056470C;
}
void *igTransformList_vtableRead(){
 UnknownGenObject801AC34C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9D3C;
 object.unknown00=lbl_804B9CD8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC3BC(){
 fn_80066188((int)igTransformList_register);
}
void igTransformList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056470C,(int)igObjectList_register,(int)fn_80024180,(int)igTransformList_getMetaCall,(int)lbl_804AB8D0,20,(int)igTransformList_vtableRead,0,0,(int)lbl_80560120);
}
void *igTransformList_getMetaCall(){return igTransformList_getMeta();}
void *fn_801AC470(){
 if(!lbl_80564710) lbl_80564710=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564710;
}
void *igTransformStack_getMeta(){
 if(!lbl_80564710 || !(reinterpret_cast<unsigned int *>(lbl_80564710)[0x24/4]&4)) fn_801AC558();
 return lbl_80564710;
}
void *igTransformStack_vtableRead(){
 UnknownGenObject801AC4E8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80480B58;
 object.unknown00=lbl_80480AF8;
 object.unknown00=lbl_804B9BB8;
 object.unknown00=lbl_804B9B58;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AC558(){
 fn_80066188((int)igTransformStack_register);
}
void igTransformStack_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564710,(int)igNonRefCountedObjectStack_register,(int)fn_800CB530,(int)igTransformStack_getMetaCall,(int)lbl_804AB8E0,20,(int)igTransformStack_vtableRead,0,0,(int)lbl_80560128);
}
void *igTransformStack_getMetaCall(){return igTransformStack_getMeta();}
void *fn_801AC60C(void *object){
 fn_801AC8A8();
 return fn_8006546C(lbl_80564714,object);
}
void *fn_801AC644(){
 if(!lbl_80564714) lbl_80564714=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564714;
}
void *igTransform_getMeta(){
 if(!lbl_80564714 || !(reinterpret_cast<unsigned int *>(lbl_80564714)[0x24/4]&4)) fn_801AC8A8();
 return lbl_80564714;
}
}
#pragma pop
