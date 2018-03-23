Pod::Spec.new do |s|

s.name         = 'TicTagSDK'

s.version      = '1.0.0'

s.license      = { :type => 'MIT' } 

s.homepage     = 'https://github.com/RyanSprite/TicTagSDK.git'    

s.authors      = { 'Ryan' => '306001701@qq.com' }

s.summary      = 'A iOS framework.'  

s.source       = { :git => 'https://github.com/RyanSprite/TicTagSDK.git', :tag => "{s.version}" }
s.platform     = :ios, '8.0'

s.source_files = 'TicTagSDK.framework/Headers/*.{h}'

s.vendored_frameworks = 'TicTagSDK.framework'

s.public_header_files = 'TicTagSDK.framework/Headers/TicTagSDK.h'

s.libraries    = 'sqlite3','icucore','z'

s.frameworks   = 'UIKit','Foundation','CoreLocation'

end
