#include <igCore/igCoreAll.h>
#include <igGap.h>
#include <igGapCore.h>

namespace Gap{
    namespace Core{

        igUnsignedLong _initialized;
 
        extern igArkCore *_arkCore;

        inline igArkCore *ArkCore_function(){
            return _arkCore;
        }

    }


    extern igResult kSuccess;
    extern igResult kFailure;

    void igRefAlchemy(igInt alchemyVersion){
        
        if (!Core::_initialized++)
        {
            kSuccess = 0; 
            kFailure = 1;

            Core::_arkCore = new Core::igArkCore();
            Core::ArkCore->initBootstrap();
            Core::igStringObj::arkRegister();
            Core::igStringObjList::arkRegister();
            Core::igFile::arkRegister();
            Core::igRegistry::arkRegister();
            Core::igResource::arkRegister();
            Core::ArkCore->initCore();
        }
        Core::ArkCore->checkAlchemyVersion(alchemyVersion);
    }

    void igReleaseAlchemy(){
        if(!Core::ArkCore->isPreExitStarted())
            Core::ArkCore->preExit();

            if(!--Core::_initialized){
                Core::ArkCore->exit();
                Core::ArkCore->exitBootstrap();
                delete Core::_arkCore;
                Core::_arkCore = 0;
            }
    }
}
