Pod::Spec.new do |s|
s.name             = "AirSenseSDK"
s.version          = "0.1.0"
s.summary          = "Cloud Wings AirSenseSDK."
s.homepage         = "https://cloudwings.io/document.html"
s.license          = {
    					:type => "Copyright",
    					:text => "Cloud Wings."
                      }
s.authors          = { "cloudwings" => "team@cloudwings.io" }
s.source           = { :git => 'https://github.com/CloudWingsIO/AirSenseSDK-iOS.git', :tag => s.version, :submodules => true }

s.platform     = :ios, '9.0'
s.requires_arc = true

s.vendored_frameworks = 'frameworks/cocoapods/AirSenseSDK.framework'

s.frameworks = 'Foundation', 'UIKit'

end
