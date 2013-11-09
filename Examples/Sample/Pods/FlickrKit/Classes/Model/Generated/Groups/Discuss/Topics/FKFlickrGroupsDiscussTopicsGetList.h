//
//  FKFlickrGroupsDiscussTopicsGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrGroupsDiscussTopicsGetListError_GroupNotFound = 1,		 /* The group_id is invalid */
	FKFlickrGroupsDiscussTopicsGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsDiscussTopicsGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsDiscussTopicsGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsDiscussTopicsGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsDiscussTopicsGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsDiscussTopicsGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsDiscussTopicsGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrGroupsDiscussTopicsGetListError;

/*

Get a list of discussion topics in a group.


Response:

<rsp stat="ok">
  <topics group_id="46744914@N00" iconserver="1" iconfarm="1" name="Tell a story in 5 frames (Visual story telling)" members="12428" privacy="3" lang="en-us" ispoolmoderated="1" total="4621" page="1" per_page="2" pages="2310">
    <topic id="72157625038324579" subject="A long time ago in a galaxy far, far away..." author="53930889@N04" authorname="Smallportfolio_jm08" role="member" iconserver="5169" iconfarm="6" count_replies="8" can_edit="0" can_delete="0" can_reply="0" is_sticky="0" is_locked="" datecreate="1287070965" datelastpost="1336905518">
      <message>&lt;div&gt;&lt;span class=&quot;photo_container pc_m bbml_img&quot;&gt;&lt;a href=&quot;/photos/53930889@N04/5080874079/&quot; title=&quot;Star Wars 1 by Smallportfolio_jm08&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm5.staticflickr.com/4035/5080874079_684cf874e0_m.jpg&quot; width=&quot;240&quot; height=&quot;180&quot; alt=&quot;Star Wars 1 by Smallportfolio_jm08&quot;  class=&quot;pc_img&quot; border=&quot;0&quot; /&gt;&lt;/a&gt;&lt;/span&gt;&lt;/div&gt;

&lt;div&gt;&lt;span class=&quot;photo_container pc_m bbml_img&quot;&gt;&lt;a href=&quot;/photos/53930889@N04/5081467846/&quot; title=&quot;Star Wars 2 by Smallportfolio_jm08&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm5.staticflickr.com/4071/5081467846_2eec86176d_m.jpg&quot; width=&quot;240&quot; height=&quot;180&quot; alt=&quot;Star Wars 2 by Smallportfolio_jm08&quot;  class=&quot;pc_img&quot; border=&quot;0&quot; /&gt;&lt;/a&gt;&lt;/span&gt;&lt;/div&gt;

&lt;div&gt;&lt;span class=&quot;photo_container pc_m bbml_img&quot;&gt;&lt;a href=&quot;/photos/53930889@N04/5081467886/&quot; title=&quot;Star Wars 3 by Smallportfolio_jm08&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm5.staticflickr.com/4021/5081467886_d8cca6c8e8_m.jpg&quot; width=&quot;240&quot; height=&quot;180&quot; alt=&quot;Star Wars 3 by Smallportfolio_jm08&quot;  class=&quot;pc_img&quot; border=&quot;0&quot; /&gt;&lt;/a&gt;&lt;/span&gt;&lt;/div&gt;

&lt;div&gt;&lt;span class=&quot;photo_container pc_m bbml_img&quot;&gt;&lt;a href=&quot;/photos/53930889@N04/5081467910/&quot; title=&quot;Star Wars 4 by Smallportfolio_jm08&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm5.staticflickr.com/4084/5081467910_274bb11fdc_m.jpg&quot; width=&quot;240&quot; height=&quot;180&quot; alt=&quot;Star Wars 4 by Smallportfolio_jm08&quot;  class=&quot;pc_img&quot; border=&quot;0&quot; /&gt;&lt;/a&gt;&lt;/span&gt;&lt;/div&gt;

&lt;div&gt;&lt;span class=&quot;photo_container pc_m bbml_img&quot;&gt;&lt;a href=&quot;/photos/53930889@N04/5081467948/&quot; title=&quot;Star Wars 5 by Smallportfolio_jm08&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm5.staticflickr.com/4154/5081467948_1a5f200bc0_m.jpg&quot; width=&quot;240&quot; height=&quot;180&quot; alt=&quot;Star Wars 5 by Smallportfolio_jm08&quot;  class=&quot;pc_img&quot; border=&quot;0&quot; /&gt;&lt;/a&gt;&lt;/span&gt;&lt;/div&gt;</message>
    </topic>
    <topic id="72157629635119774" subject="Where The Fish Are" author="75240402@N04" authorname="Nokinrocks" role="member" iconserver="7027" iconfarm="8" count_replies="0" can_edit="0" can_delete="0" can_reply="0" is_sticky="0" is_locked="" datecreate="1336485653" datelastpost="1336485653">
      <message>&lt;a href=&quot;http://www.flickr.com/photos/nokinrocks/7120495637/&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm9.staticflickr.com/8005/7120495637_fec0382b4b_n.jpg&quot; width=&quot;320&quot; height=&quot;256&quot; alt=&quot;Step It Up&quot; /&gt;&lt;/a&gt;

&lt;a href=&quot;http://www.flickr.com/photos/nokinrocks/7122908705/&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm8.staticflickr.com/7259/7122908705_3bef338378_n.jpg&quot; width=&quot;240&quot; height=&quot;320&quot; alt=&quot;P1050351&quot; /&gt;&lt;/a&gt;

&lt;a href=&quot;http://www.flickr.com/photos/nokinrocks/7122922123/&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm8.staticflickr.com/7052/7122922123_2bfcb6707c_n.jpg&quot; width=&quot;214&quot; height=&quot;320&quot; alt=&quot;Frog On A Log&quot; /&gt;&lt;/a&gt;

&lt;a href=&quot;http://www.flickr.com/photos/nokinrocks/7122929521/&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm8.staticflickr.com/7047/7122929521_8ffebdd424_n.jpg&quot; width=&quot;320&quot; height=&quot;200&quot; alt=&quot;P1050397&quot; /&gt;&lt;/a&gt;

&lt;a href=&quot;http://www.flickr.com/photos/nokinrocks/7122916999/&quot;&gt;&lt;img class=&quot;notsowide&quot; src=&quot;http://farm8.staticflickr.com/7200/7122916999_a7328f9dcc_n.jpg&quot; width=&quot;320&quot; height=&quot;261&quot; alt=&quot;P1050361&quot; /&gt;&lt;/a&gt;</message>
    </topic>
  </topics>
</rsp>

*/
@interface FKFlickrGroupsDiscussTopicsGetList : NSObject <FKFlickrAPIMethod>

/* The NSID of the group to fetch information for. */
@property (nonatomic, strong) NSString *group_id; /* (Required) */

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, strong) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, strong) NSString *page;


@end