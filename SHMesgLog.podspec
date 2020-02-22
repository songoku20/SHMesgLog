#
# Be sure to run `pod lib lint SHMesgLog.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#
Pod::Spec.new do |s|
  s.name             = 'SHMesgLog'
  s.version          = '0.1.8'
  s.summary          = 'Everything about this project under our ownership'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = "Everything about this project under our ownership in SHMesgLog-iOS"

  s.homepage         = 'https://github.com/songoku20/SHMesgLog'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'songoku20' => 'sonleminh@vccorp.vn' }
  s.source           = { :http => "https://github.com/songoku20/SHMesgLog/releases/download/0.1.8/SHMesgLog-v0.1.8.zip" }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  # s.ios.deployment_target = '8.0'

  s.source_files = 'SHMesgLog/Classes/**/*'
  s.frameworks          = ["SystemConfiguration", "QuartzCore"]
  s.library             = "z", "System", "xml2", "xml2.2", "c++"
  s.requires_arc        = true
  
  s.platform            = :ios, '8.0'
  s.preserve_paths      = 'SHMesgLog.framework'
  s.public_header_files = 'SHMesgLog.framework/Versions/A/Headers/SHMesgLog.h'
  s.source_files        = 'SHMesgLog.framework/Versions/A/Headers/SHMesgLog.h'
  s.dependency          'CTLTrackingAds-SDK'
  s.vendored_frameworks = 'SHMesgLog.framework'

end