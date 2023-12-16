{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x12-singly_linked_lists":{"items":[{"name":"tests","path":"0x12-singly_linked_lists/tests","contentType":"directory"},{"name":"0-print_list.c","path":"0x12-singly_linked_lists/0-print_list.c","contentType":"file"},{"name":"1-list_len.c","path":"0x12-singly_linked_lists/1-list_len.c","contentType":"file"},{"name":"100-first.c","path":"0x12-singly_linked_lists/100-first.c","contentType":"file"},{"name":"101-hello_holberton.asm","path":"0x12-singly_linked_lists/101-hello_holberton.asm","contentType":"file"},{"name":"2-add_node.c","path":"0x12-singly_linked_lists/2-add_node.c","contentType":"file"},{"name":"3-add_node_end.c","path":"0x12-singly_linked_lists/3-add_node_end.c","contentType":"file"},{"name":"4-free_list.c","path":"0x12-singly_linked_lists/4-free_list.c","contentType":"file"},{"name":"README.md","path":"0x12-singly_linked_lists/README.md","contentType":"file"},{"name":"_putchar.c","path":"0x12-singly_linked_lists/_putchar.c","contentType":"file"},{"name":"lists.h","path":"0x12-singly_linked_lists/lists.h","contentType":"file"}],"totalCount":11},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"0x1A-hash_tables","path":"0x1A-hash_tables","contentType":"directory"},{"name":"0x1C-makefiles","path":"0x1C-makefiles","contentType":"directory"},{"name":"0x1E-search_algorithms","path":"0x1E-search_algorithms","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":27}},"fileTreeProcessingTime":5.958311,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":400077526,"defaultBranch":"master","name":"alx-low_level_programming","ownerLogin":"Gedeonobae","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2021-08-26T07:19:00.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/85337093?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1629964498.2562811","canEdit":false,"refType":"branch","currentOid":"bf314a21eb329c9e8da5ee0ed3bb3dd49f24f8ff"},"path":"0x12-singly_linked_lists/101-hello_holberton.asm","currentUser":null,"blob":{"rawLines":["; File: 101-hello_holberton.asm","; Auth: Gedeon Obae Gekonge","; Desc: 64-bit assembly program that prints",";       Hello, Holberton followed by a new line.","","extern printf","","section .text","   global main","","main:","   push rbp","","   mov rdi,fmt","   mov rsi,msg","   mov rax,0","   call printf","","   pop rbp","","   mov rax,0","   ret","","section .data","   msg: db \"Hello, Holberton\", 0","   fmt: db \"%s\", 10, 0"],"stylingDirectives":[[{"start":0,"end":31,"cssClass":"pl-c"}],[{"start":0,"end":27,"cssClass":"pl-c"}],[{"start":0,"end":43,"cssClass":"pl-c"}],[{"start":0,"end":48,"cssClass":"pl-c"}],[],[{"start":0,"end":6,"cssClass":"pl-c1"},{"start":7,"end":13,"cssClass":"pl-en"}],[],[{"start":0,"end":7,"cssClass":"pl-c1"},{"start":7,"end":13,"cssClass":"pl-en"}],[{"start":3,"end":9,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-en"}],[],[{"start":0,"end":5,"cssClass":"pl-en"}],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":7,"cssClass":"pl-k"},{"start":7,"end":8,"cssClass":"pl-en"},{"start":8,"end":11,"cssClass":"pl-v"}],[],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":6,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-v"},{"start":10,"end":11,"cssClass":"pl-s1"},{"start":11,"end":14,"cssClass":"pl-en"}],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":6,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-v"},{"start":10,"end":11,"cssClass":"pl-s1"},{"start":11,"end":14,"cssClass":"pl-en"}],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":6,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-v"},{"start":10,"end":11,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"}],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":7,"cssClass":"pl-k"},{"start":7,"end":14,"cssClass":"pl-en"}],[],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":6,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-v"}],[],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":6,"cssClass":"pl-k"},{"start":6,"end":7,"cssClass":"pl-en"},{"start":7,"end":10,"cssClass":"pl-v"},{"start":10,"end":11,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"}],[{"start":0,"end":3,"cssClass":"pl-en"},{"start":3,"end":6,"cssClass":"pl-k"}],[],[{"start":0,"end":7,"cssClass":"pl-c1"},{"start":7,"end":13,"cssClass":"pl-en"}],[{"start":0,"end":11,"cssClass":"pl-en"},{"start":11,"end":29,"cssClass":"pl-s"},{"start":29,"end":30,"cssClass":"pl-s1"},{"start":30,"end":31,"cssClass":"pl-en"},{"start":31,"end":32,"cssClass":"pl-c1"}],[{"start":0,"end":11,"cssClass":"pl-en"},{"start":11,"end":15,"cssClass":"pl-s"},{"start":15,"end":16,"cssClass":"pl-s1"},{"start":16,"end":17,"cssClass":"pl-en"},{"start":17,"end":19,"cssClass":"pl-c1"},{"start":19,"end":20,"cssClass":"pl-s1"},{"start":20,"end":21,"cssClass":"pl-en"},{"start":21,"end":22,"cssClass":"pl-c1"}]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/Gedeonobae/alx-low_level_programming/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/Gedeonobae/alx-low_level_programming/security/dependabot","repoSecurityAndAnalysisPath":"/Gedeonobae/alx-low_level_programming/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"101-hello_holberton.asm","displayUrl":"https://github.com/Gedeonobae/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm?raw=true","headerInfo":{"blobSize":"380 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"d732a3e","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FGedeonobae%2Falx-low_level_programming%2Fblob%2Fmaster%2F0x12-singly_linked_lists%2F101-hello_holberton.asm","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"26","truncatedSloc":"19"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"Assembly","languageID":24,"large":false,"loggedIn":false,"newDiscussionPath":"/Gedeonobae/alx-low_level_programming/discussions/new","newIssuePath":"/Gedeonobae/alx-low_level_programming/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/Gedeonobae/alx-low_level_programming/blob/master/0x12-singly_linked_lists/101-hello_holberton.asm","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/Gedeonobae/alx-low_level_programming/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/Gedeonobae/alx-low_level_programming/raw/master/0x12-singly_linked_lists/101-hello_holberton.asm","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"Gedeonobae","repoName":"alx-low_level_programming","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":true,"symbols":[]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/Gedeonobae/alx-low_level_programming/branches":{"post":"EEu6UnKMiXwEQjhYU_KyRxmzray-fpzGP6Yv4b-1RJoiRTTawYkAk4cUhmnAUhvxG_mYDQ4TUhMznSLVTtdR3g"},"/repos/preferences":{"post":"HP3UUSV2WBdObHBIZ_yGw3Ll6dgr7PAdzLhwN4r3g2BHCjfIGs6Sn6MgiqyRw4TGpdUAF4wuVKVS5R0IUvjw_Q"}}},"title":"alx-low_level_programming/0x12-singly_linked_lists/101-hello_holberton.asm at master · Gedeonobae/alx-low_level_programming"}