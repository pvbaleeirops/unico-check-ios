//
//  ConfigObjc.h
//  AcessoBio
//
//  Created by Matheus Domingos on 09/11/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN


static NSString* BaseURL = @"https://api.facetec.com/api/v3.1/biometrics";
static NSString* DeviceKeyIdentifier = @"daTvSzrmdPo8ceuj5zsgCqMpVCj8LKle";
static NSString* PublicFaceScanEncryptionKey  =
@"-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA5PxZ3DLj+zP6T6HFgzzk\nM77LdzP3fojBoLasw7EfzvLMnJNUlyRb5m8e5QyyJxI+wRjsALHvFgLzGwxM8ehz\nDqqBZed+f4w33GgQXFZOS4AOvyPbALgCYoLehigLAbbCNTkeY5RDcmmSI/sbp+s6\nmAiAKKvCdIqe17bltZ/rfEoL3gPKEfLXeN549LTj3XBp0hvG4loQ6eC1E1tRzSkf\nGJD4GIVvR+j12gXAaftj3ahfYxioBH7F7HQxzmWkwDyn3bqU54eaiB7f0ftsPpWM\nceUaqkL2DZUvgN0efEJjnWy5y1/Gkq5GGWCROI9XG/SwXJ30BbVUehTbVcD70+ZF\n8QIDAQAB\n-----END PUBLIC KEY-----";
@interface ConfigObjc : NSObject

@end

NS_ASSUME_NONNULL_END
