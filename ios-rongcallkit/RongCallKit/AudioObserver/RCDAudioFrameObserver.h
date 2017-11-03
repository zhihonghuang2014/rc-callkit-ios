//
//  RCDAudioFrameObserver.hpp
//  RongCallKit
//
//  Created by litao on 16/9/12.
//  Copyright © 2016年 Rong Cloud. All rights reserved.
//

#ifndef RCDAudioFrameObserver_hpp
#define RCDAudioFrameObserver_hpp

#import <AgoraRtcEngineKit/IAgoraMediaEngine.h>
#import <RongCallLib/IVideoFrameObserver.h>
#import <UIKit/UIKit.h>
#import <stdio.h>

class RCDAudioFrameObserver : public agora::media::IAudioFrameObserver {
  public:
    static RCDAudioFrameObserver *sharedObserver();
    bool onRecordAudioFrame(agora::media::IAudioFrameObserver::AudioFrame &audioFrame);
    bool onPlaybackAudioFrame(agora::media::IAudioFrameObserver::AudioFrame &audioFrame);
    bool onMixedAudioFrame(agora::media::IAudioFrameObserver::AudioFrame &audioFrame);
    bool onPlaybackAudioFrameBeforeMixing(unsigned int uid, agora::media::IAudioFrameObserver::AudioFrame &audioFrame);
};

#endif /* RCDAudioFrameObserver_hpp */
