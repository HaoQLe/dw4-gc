#include <unknownGen.h>
#include <meta/igFloatHistogram.h>
#include <meta/igIntHistogram.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800667D8();
void fn_800667E4();
void *fn_8021B338();
extern void *lbl_805659DC;
extern void *lbl_805659E4;
extern void *lbl_805659E8;
extern void *lbl_805659EC;
extern void *lbl_80565A04;
extern void *lbl_80565A08;
extern void *lbl_80565A24;
extern void *lbl_80565A30;
extern void *lbl_80565A3C;
extern void *lbl_80565A4C;
extern void *lbl_80565A54;
extern void *lbl_80565A58;
extern void *lbl_80565A5C;
extern void *lbl_80565A60;
extern void *lbl_80565A68;
extern void *lbl_80565A6C;
extern void *lbl_80565A70;
extern void *lbl_80565A78;
extern void *lbl_80565A88;
extern void *lbl_80565A8C;
extern void *lbl_80565A90;
extern void *lbl_80565A98;
extern void *lbl_80565AA8;
extern void *lbl_80565AAC;
extern void *lbl_80565AB0;
extern void *lbl_80565AB8;
extern void *lbl_80565AC0;
extern void *lbl_80565AC4;
extern void *lbl_80565ACC;
extern void *lbl_80565AE4;
extern void *lbl_80565AEC;
extern void *lbl_80565AF0;
extern void *lbl_80565AF4;
extern void *lbl_80565AFC;
extern void *lbl_80565B00;
extern void *lbl_80565B08;
extern void *lbl_80565B20;
extern void *lbl_80565B24;
extern void *lbl_80565B28;
extern void *lbl_80565B2C;
extern void *lbl_80565B34;
extern void *lbl_80565B44;
}
extern "C" {
void *igMersenneTwisterRandomNumber_virtual58(){return lbl_80565A30;}
void *igMersenneTwisterRandomNumber_virtual60(){return fn_8021B338();}
void *igMersenneTwisterRandomNumber_virtualBC(){return lbl_80565AA8;}
void *igMersenneTwisterRandomNumber_virtual11C(){return lbl_80565AB0;}
void *igMersenneTwisterRandomNumber_virtual180(){return lbl_80565AB8;}
void *igMersenneTwisterRandomNumber_virtual1E4(){return lbl_80565AC4;}
void *igMersenneTwisterRandomNumber_virtual248(){return lbl_80565B00;}
void *igDataPump_virtual58(){return lbl_80565B08;}
void *igDataPump_virtualB4(){return lbl_80565B44;}
void *igDataPump_virtual110(){return lbl_80565B34;}
void *igBoolObject_virtual58(){return lbl_80565B2C;}
void *igBoolObject_virtualB4(){return lbl_80565B28;}
void *igBoolObject_virtual17C(){return lbl_80565B24;}
void *igBoolObject_virtual244(){return lbl_80565B20;}
void *igBoolObject_virtual2A0(){return lbl_80565AFC;}
void *igDataPumpInfo_virtual58(){return lbl_80565AF4;}
void *igDataPumpList_virtual58(){return lbl_80565AEC;}
void *igDataPumpManager_virtual58(){return lbl_80565AE4;}
void *igDataPumpManager_virtualB4(){return lbl_80565AC0;}
void *igDataPumpManager_virtual110(){return lbl_80565AF0;}
void *igDataPumpManager_virtual174(){return lbl_80565AAC;}
void *igDataPumpManager_virtual1D0(){return lbl_80565ACC;}
void *igFloatHistogram_virtual58(){return lbl_80565A98;}
void igFloatHistogram_virtual38(int p0){
 fn_800667D8();
 float value0=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12);
 reinterpret_cast<Meta::igFloatHistogram *>((void *)p0)->_minValueIgb=value0;
 float value1=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16);
 reinterpret_cast<Meta::igFloatHistogram *>((void *)p0)->_maxValueIgb=value1;
 float value2=*reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20);
 reinterpret_cast<Meta::igFloatHistogram *>((void *)p0)->_binWidthIgb=value2;
}
void igFloatHistogram_virtual40(int p0){
 float value0=reinterpret_cast<Meta::igFloatHistogram *>((void *)p0)->_minValueIgb;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+12)=value0;
 float value1=reinterpret_cast<Meta::igFloatHistogram *>((void *)p0)->_maxValueIgb;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+16)=value1;
 float value2=reinterpret_cast<Meta::igFloatHistogram *>((void *)p0)->_binWidthIgb;
 *reinterpret_cast<float *>(reinterpret_cast<char *>((void *)p0)+20)=value2;
 fn_800667E4();
}
void *igHistogramBase_virtual58(){return lbl_805659DC;}
void *igFloatObject_virtual58(){return lbl_80565A90;}
void *igFloatObject_virtualB4(){return lbl_80565A8C;}
void *igFloatObject_virtual17C(){return lbl_80565A88;}
void *igIntObject_virtual58(){return lbl_80565A70;}
void *igIntObject_virtualB4(){return lbl_80565A6C;}
void *igIntObject_virtual17C(){return lbl_80565A68;}
void *igMatrixObject_virtual58(){return lbl_80565A60;}
void *igMatrixObjectList_virtual58(){return lbl_80565A5C;}
void *igNonRefCountedMatrixObjectList_virtual58(){return lbl_80565A58;}
void *fn_8021ECD4(){return lbl_80565A54;}
void *igMatrixStack_virtual58(){return lbl_80565A4C;}
void *igMeanAndStandardDeviation_virtual58(){return lbl_80565A3C;}
void *fn_8021ECEC(){return lbl_805659E4;}
void *fn_8021ECF4(){return lbl_80565A24;}
void igIntHistogram_virtual38(int p0){
 fn_800667D8();
 reinterpret_cast<Meta::igIntHistogram *>((void *)p0)->_minValueIgb=(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+12);
 reinterpret_cast<Meta::igIntHistogram *>((void *)p0)->_maxValueIgb=(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+16);
 reinterpret_cast<Meta::igIntHistogram *>((void *)p0)->_binWidthIgb=(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+20);
}
void igIntHistogram_virtual40(int p0){
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+12)=(void *)reinterpret_cast<Meta::igIntHistogram *>((void *)p0)->_minValueIgb;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+16)=(void *)reinterpret_cast<Meta::igIntHistogram *>((void *)p0)->_maxValueIgb;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>((void *)p0)+20)=(void *)reinterpret_cast<Meta::igIntHistogram *>((void *)p0)->_binWidthIgb;
 fn_800667E4();
}
void *igIntHistogram_virtual58(){return lbl_80565A78;}
void *igUnresolvedSymbol_virtual58(){return lbl_80565A08;}
void *igUnresolvedSymbolList_virtual58(){return lbl_80565A04;}
void *igObjectRegistryMap_virtual58(){return lbl_805659EC;}
void *igObjectRegistryMap_virtualB4(){return lbl_805659E8;}
}
#pragma pop
