Pod::Spec.new do |s|

	s.name         = "DVGLLPlayerFramework"
	s.version      = "1.0.53"
	s.summary      = "ffmpeg-based player for LowLat playlists"
	s.description  = "ffmpeg-based player for LowLat playlists, iOS, arm64 only"
	s.homepage     = "http://denivip.ru/"
	s.license      = 'LGPL'
	s.author       = { 'DENIVIP' => 'support@denivip.ru' }

	s.platform     = :ios
	s.source       = { :git => 'https://github.com/cvoalex/LivePlayer.git', :branch => 'DVGLLPlayerFramework-Release' }

	s.ios.deployment_target = '8.0'
	s.ios.vendored_frameworks = 'DVGLLPlayerFramework.framework'

	s.ios.framework  = 'CoreVideo', 'CoreAudio', 'QuartzCore', 'AudioToolbox', 'VideoToolbox'

end

# ffmpeg src backup:
# cd ~/zzz_deleteme/
# zip -r ijkplayer-ios.zip ijkplayer-ios -x "*.git*" -x "**/build/*" -x "**/doc/*" -x "**/test/*" -x "**/tests/*" -x "**/demos/*" -x "**/fuzz/*" -x "*.o" -x "*.a"
