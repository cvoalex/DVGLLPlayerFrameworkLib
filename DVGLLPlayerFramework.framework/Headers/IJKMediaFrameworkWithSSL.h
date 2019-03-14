//
//  IJKMediaFrameworkWithSSL.h
//  IJKMediaFrameworkWithSSL
//
//  Created by zhangxinzheng on 27/02/2017.
//  Copyright © 2017 bilibili. All rights reserved.
//

#import <UIKit/UIKit.h>

#define DVGLLPlayerFramework_VERSION @"1.0.53"

//! Project version number for IJKMediaFrameworkWithSSL.
FOUNDATION_EXPORT double IJKMediaFrameworkWithSSLVersionNumber;

//! Project version string for IJKMediaFrameworkWithSSL.
FOUNDATION_EXPORT const unsigned char IJKMediaFrameworkWithSSLVersionString[];

#ifdef DEBUG
// Uncomment to upload full chunks, without LowLat microchunking
//#define DEBUG_UPLOADNONLL
//#define DEBUG_LOCALTEST
#endif

// In this header, you should import all the public headers of your framework using statements like #import <IJKMediaFrameworkWithSSL/PublicHeader.h>
#import <DVGLLPlayerFramework/IJKMediaPlayback.h>
#import <DVGLLPlayerFramework/IJKFFOptions.h>
#import <DVGLLPlayerFramework/IJKMediaModule.h>
#import <DVGLLPlayerFramework/IJKMediaPlayer.h>
#import <DVGLLPlayerFramework/IJKNotificationManager.h>
#import <DVGLLPlayerFramework/IJKKVOController.h>
#import <DVGLLPlayerFramework/IJKFFMoviePlayerController.h>
#import <DVGLLPlayerFramework/DVGLLPlayerView.h>
#import <DVGLLPlayerFramework/DVGLLPlayerStatChart.h>
#import <DVGLLPlayerFramework/DVGPlayerServerChecker.h>

// backward compatible for old names
#define IJKMediaPlaybackIsPreparedToPlayDidChangeNotification IJKMPMediaPlaybackIsPreparedToPlayDidChangeNotification
#define IJKMoviePlayerLoadStateDidChangeNotification IJKMPMoviePlayerLoadStateDidChangeNotification
#define IJKMoviePlayerPlaybackDidFinishNotification IJKMPMoviePlayerPlaybackDidFinishNotification
#define IJKMoviePlayerPlaybackDidFinishReasonUserInfoKey IJKMPMoviePlayerPlaybackDidFinishReasonUserInfoKey
#define IJKMoviePlayerPlaybackStateDidChangeNotification IJKMPMoviePlayerPlaybackStateDidChangeNotification
#define IJKMoviePlayerIsAirPlayVideoActiveDidChangeNotification IJKMPMoviePlayerIsAirPlayVideoActiveDidChangeNotification
#define IJKMoviePlayerVideoDecoderOpenNotification IJKMPMoviePlayerVideoDecoderOpenNotification
#define IJKMoviePlayerFirstVideoFrameRenderedNotification IJKMPMoviePlayerFirstVideoFrameRenderedNotification
#define IJKMoviePlayerFirstAudioFrameRenderedNotification IJKMPMoviePlayerFirstAudioFrameRenderedNotification
#define IJKMoviePlayerFirstAudioFrameDecodedNotification IJKMPMoviePlayerFirstAudioFrameDecodedNotification
#define IJKMoviePlayerFirstVideoFrameDecodedNotification IJKMPMoviePlayerFirstVideoFrameDecodedNotification
#define IJKMoviePlayerOpenInputNotification IJKMPMoviePlayerOpenInputNotification
#define IJKMoviePlayerFindStreamInfoNotification IJKMPMoviePlayerFindStreamInfoNotification
#define IJKMoviePlayerComponentOpenNotification IJKMPMoviePlayerComponentOpenNotification
#define IJKMPMoviePlayerAccurateSeekCompleteNotification IJKMPMoviePlayerAccurateSeekCompleteNotification
#define IJKMoviePlayerSeekAudioStartNotification IJKMPMoviePlayerSeekAudioStartNotification
#define IJKMoviePlayerSeekVideoStartNotification IJKMPMoviePlayerSeekVideoStartNotification


/////////////////////////////////
// curl -s "http://d1d7bq76ey2psd.cloudfront.net/getChunk?playlist=test3316&chunk=942" -o ts1.ts
// ffprobe -show_frames -print_format csv -i ts1.ts
