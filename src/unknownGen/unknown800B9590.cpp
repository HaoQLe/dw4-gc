#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void *fn_800AC294();
void igClearAttr_fieldInit();
void igVisualAttribute_register();
extern char lbl_80479BCC[];
extern char lbl_80479BE0[];
extern char lbl_8047D0A8[];
extern char lbl_8047D12C[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E610[4];
extern char lbl_8055E614[4];
extern char lbl_8055E618[4];
extern char lbl_8055E61C[4];
extern void *lbl_805621F4;
extern void *lbl_805629A0;
extern void *lbl_805629A8;
void *igClippingStateAttr_getMeta();
void *igClippingStateAttr_vtableRead();
void fn_800B9660();
void igClippingStateAttr_register();
void *igClippingStateAttr_getMetaCall();
void igClippingStateAttr_fieldInit();
void *igClearAttr_getMeta();
void *igClearAttr_vtableRead();
void fn_800B9860();
void igClearAttr_register();
void *igClearAttr_getMetaCall();
}
struct UnknownGenObject800B9608_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9808_0 {
 void *unknown00;
 char unknown04[68];
};
extern "C" {
void *fn_800B9590(){
 if(!lbl_805629A0) lbl_805629A0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629A0;
}
void *igClippingStateAttr_getMeta(){
 if(!lbl_805629A0 || !(reinterpret_cast<unsigned int *>(lbl_805629A0)[0x24/4]&4)) fn_800B9660();
 return lbl_805629A0;
}
void *igClippingStateAttr_vtableRead(){
 UnknownGenObject800B9608_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D0A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9660(){
 fn_80066188((int)igClippingStateAttr_register);
}
void igClippingStateAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629A0,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igClippingStateAttr_getMetaCall,(int)lbl_80479BCC,16,(int)igClippingStateAttr_vtableRead,(int)igClippingStateAttr_fieldInit,0,0);
}
void *igClippingStateAttr_getMetaCall(){return igClippingStateAttr_getMeta();}
void igClippingStateAttr_fieldInit(){
 void *meta=lbl_805629A0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055E610,1);
 fn_8003EC68(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055E614,lbl_8055E618,lbl_8055E61C,field);
}
void *fn_800B9794(void *object){
 fn_800B9860();
 return fn_8006546C(lbl_805629A8,object);
}
void *igClearAttr_getMeta(){
 if(!lbl_805629A8 || !(reinterpret_cast<unsigned int *>(lbl_805629A8)[0x24/4]&4)) fn_800B9860();
 return lbl_805629A8;
}
void *igClearAttr_vtableRead(){
 UnknownGenObject800B9808_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D12C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9860(){
 fn_80066188((int)igClearAttr_register);
}
void igClearAttr_register(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629A8,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igClearAttr_getMetaCall,(int)lbl_80479BE0,72,(int)igClearAttr_vtableRead,(int)igClearAttr_fieldInit,0,0);
}
void *igClearAttr_getMetaCall(){return igClearAttr_getMeta();}
}
#pragma pop
