#
# Be sure to run `pod lib lint TLSortAndSearch.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TLSortAndSearch'
  s.version          = '0.1.0'
  s.summary          = 'A short description of TLSortAndSearch.'
  s.homepage         = 'https://github.com/huawt/TLSortAndSearch'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huawt' => 'ghost263sky@163.com' }
  s.source           = { :git => 'https://github.com/huawt/TLSortAndSearch.git', :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.source_files = 'TLSortAndSearch/Classes/**/*'
  s.public_header_files = 'TLSortAndSearch/Classes/**/*.h'
  s.frameworks = 'Foundation'
  s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include" }
end
