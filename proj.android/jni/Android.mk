LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := game_shared

LOCAL_MODULE_FILENAME := libgame

LOCAL_SRC_FILES := spritegame/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/SceneManager.cpp \
                   ../../Classes/SoundManager.cpp \
                   ../../Classes/GameLoading.cpp \
                   ../../Classes/GameMenuScene.cpp \
                   ../../Classes/GamePassScene.cpp \
                   ../../Classes/GamePauseScene.cpp \
                   ../../Classes/GameOverScene.cpp \
                   ../../Classes/GameHelpScene.cpp \
                   ../../Classes/SlidingMenu.cpp \
                   ../../Classes/GameBaseDialog.cpp \
                   ../../Classes/SpriteGrid.cpp \
                   ../../Classes/SpriteMath.cpp \
                   ../../Classes/HelloWorldScene.cpp
                   
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes                   

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static cocosdenshion_static cocos_extension_static
            
include $(BUILD_SHARED_LIBRARY)

$(call import-module,CocosDenshion/android) \
$(call import-module,cocos2dx) \
$(call import-module,extensions)
