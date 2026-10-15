#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801256A4(int,int);
void fn_80125734(int,int);
void fn_80125790(int,int);
void fn_80125808(int,int);
void fn_80125940(int,int);
void fn_80125990(int,int);
void fn_80125A90(int,int);
void fn_80125B30(int,int);
void fn_80125C1C(int,int);
void fn_80125C8C(int,int);
void fn_80125DBC(int,int);
void fn_80125F7C(int,int);
void fn_80125FF8(int,int);
void *fn_8012614C();
void *fn_8012616C(int);
void fn_80126178(int);
void *fn_80126190(int,int);
void *fn_80127DF0(void *,void *,void *);
void *fn_80127E48(void *,void *,void *);
void *fn_80127EA0(void *,void *,void *);
void *fn_80127EF8(void *,void *);
void *fn_80127F2C(void *,void *);
void *fn_80127F60(void *,void *);
void *fn_80127F94(void *,void *);
void *fn_80127FC8(void *,void *);
void *fn_80127FFC(void *,void *);
void *fn_80128030(void *,void *);
void *fn_80128064(void *,void *);
void fn_80128098(void *,void *);
void *igAABox_getMeta();
void *igPlane_getMeta();
extern void *igSphere_meta;
extern void *igPlane_meta;
extern void *igAABox_meta;
}
extern "C" {
void fn_80125430(){
 void *value3=igAABox_getMeta();
 void *value4=fn_80127DF0(igSphere_meta,value3,(void *)fn_801256A4);
 void *value5=igPlane_getMeta();
 fn_80127DF0(igSphere_meta,value5,(void *)fn_80125734);
 void *value0=igSphere_meta;
 fn_80127DF0(value0,value0,(void *)fn_80125790);
 fn_80127EA0(igSphere_meta,igAABox_meta,(void *)fn_80125990);
 fn_80127EA0(igSphere_meta,igPlane_meta,(void *)fn_80125940);
 void *value1=igSphere_meta;
 fn_80127EA0(value1,value1,(void *)fn_80125A90);
 fn_80127E48(igSphere_meta,igAABox_meta,(void *)fn_80125C8C);
 void *value2=igSphere_meta;
 fn_80127E48(value2,value2,(void *)fn_80125DBC);
 fn_80127EF8(igSphere_meta,(void *)fn_80125808);
 fn_80127F60(igSphere_meta,(void *)fn_80125B30);
 fn_80127F2C(igSphere_meta,(void *)fn_80125F7C);
 fn_80127FC8(igSphere_meta,(void *)fn_80125C1C);
 fn_80127F94(igSphere_meta,(void *)fn_80125FF8);
 fn_80127FFC(igSphere_meta,(void *)fn_8012614C);
 fn_80128030(igSphere_meta,(void *)fn_8012616C);
 fn_80128064(igSphere_meta,(void *)fn_80126178);
 fn_80128098(igSphere_meta,(void *)fn_80126190);
}
}
#pragma pop
