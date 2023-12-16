{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x12-singly_linked_lists":{"items":[{"name":".gitignore","path":"0x12-singly_linked_lists/.gitignore","contentType":"file"},{"name":"0-print_list.c","path":"0x12-singly_linked_lists/0-print_list.c","contentType":"file"},{"name":"1-list_len.c","path":"0x12-singly_linked_lists/1-list_len.c","contentType":"file"},{"name":"100-first.c","path":"0x12-singly_linked_lists/100-first.c","contentType":"file"},{"name":"101-hello_holberton.asm","path":"0x12-singly_linked_lists/101-hello_holberton.asm","contentType":"file"},{"name":"2-add_node.c","path":"0x12-singly_linked_lists/2-add_node.c","contentType":"file"},{"name":"3-add_node_end.c","path":"0x12-singly_linked_lists/3-add_node_end.c","contentType":"file"},{"name":"4-free_list.c","path":"0x12-singly_linked_lists/4-free_list.c","contentType":"file"},{"name":"README.md","path":"0x12-singly_linked_lists/README.md","contentType":"file"},{"name":"lists.h","path":"0x12-singly_linked_lists/lists.h","contentType":"file"}],"totalCount":10},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x09-static_libraries","path":"0x09-static_libraries","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x11-printf","path":"0x11-printf","contentType":"submodule","submoduleUrl":"/Pericles001/printf/tree/2dc757c08b08002fb9845e7bafe6f0f8e6ca7b9c","submoduleDisplayName":"0x11-printf @ 2dc757c"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x16-simple_shell","path":"0x16-simple_shell","contentType":"submodule","submoduleUrl":"/Pericles001/simple_shell/tree/a702e0d883091c2eee401876f39cb91156e333c9","submoduleDisplayName":"0x16-simple_shell @ a702e0d"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"0x19-stacks_queues_lifo_fifo","path":"0x19-stacks_queues_lifo_fifo","contentType":"submodule","submoduleUrl":"/Pericles001/monty/tree/b76cd56c987331361d9ace3d0310e39cefad83b1","submoduleDisplayName":"0x19-stacks_queues_lifo_fifo @ b76cd56"},{"name":"0x1A-hash_tables","path":"0x1A-hash_tables","contentType":"directory"},{"name":"0x1B-sorting_algorithms","path":"0x1B-sorting_algorithms","contentType":"submodule","submoduleUrl":"/Pericles001/sorting_algorithms/tree/00a07fa8c8e20c686e2d664d5ac7357c2d0ce871","submoduleDisplayName":"0x1B-sorting_algorithms @ 00a07fa"},{"name":"0x1C-makefiles","path":"0x1C-makefiles","contentType":"directory"},{"name":"0x1D-binary_trees","path":"0x1D-binary_trees","contentType":"submodule","submoduleUrl":"/Pericles001/binary_trees/tree/d0e9978e1ff567f199eafcfc987451bea656fdd9","submoduleDisplayName":"0x1D-binary_trees @ d0e9978"},{"name":"0x1E-search_algorithms","path":"0x1E-search_algorithms","contentType":"directory"},{"name":".gitignore","path":".gitignore","contentType":"file"},{"name":".gitmodules","path":".gitmodules","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":34}},"fileTreeProcessingTime":8.696072,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":399894432,"defaultBranch":"master","name":"alx-low_level_programming","ownerLogin":"Pericles001","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2021-08-25T16:56:35.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/55035365?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1629910698.81384","canEdit":false,"refType":"branch","currentOid":"29c3c687100130842ea1fa2a96312de480863d40"},"path":"0x12-singly_linked_lists/4-free_list.c","currentUser":null,"blob":{"rawLines":["#include \"lists.h\"","","/**"," *free_list - Frees a list"," *@head: A pointer to the list head"," *"," */","","void free_list(list_t *head)","{","\tlist_t *tmp;","","\twhile (head)","\t{","\t\ttmp = head->next;","\t\tfree(head->str);","\t\tfree(head);","\t\thead = tmp;","\t}","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":26,"cssClass":"pl-c"}],[{"start":0,"end":35,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":14,"cssClass":"pl-en"},{"start":15,"end":21,"cssClass":"pl-smi"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":23,"end":27,"cssClass":"pl-s1"}],[],[{"start":1,"end":7,"cssClass":"pl-smi"},{"start":8,"end":9,"cssClass":"pl-c1"},{"start":9,"end":12,"cssClass":"pl-s1"}],[],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":12,"cssClass":"pl-s1"}],[],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":6,"end":7,"cssClass":"pl-c1"},{"start":8,"end":12,"cssClass":"pl-s1"},{"start":12,"end":14,"cssClass":"pl-c1"},{"start":14,"end":18,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":11,"cssClass":"pl-s1"},{"start":11,"end":13,"cssClass":"pl-c1"},{"start":13,"end":16,"cssClass":"pl-c1"}],[{"start":2,"end":6,"cssClass":"pl-en"},{"start":7,"end":11,"cssClass":"pl-s1"}],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":12,"cssClass":"pl-s1"}],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/Pericles001/alx-low_level_programming/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/Pericles001/alx-low_level_programming/security/dependabot","repoSecurityAndAnalysisPath":"/Pericles001/alx-low_level_programming/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"4-free_list.c","displayUrl":"https://github.com/Pericles001/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c?raw=true","headerInfo":{"blobSize":"230 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"9b4002f","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FPericles001%2Falx-low_level_programming%2Fblob%2Fmaster%2F0x12-singly_linked_lists%2F4-free_list.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"20","truncatedSloc":"17"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/Pericles001/alx-low_level_programming/discussions/new","newIssuePath":"/Pericles001/alx-low_level_programming/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/Pericles001/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/Pericles001/alx-low_level_programming/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/Pericles001/alx-low_level_programming/raw/master/0x12-singly_linked_lists/4-free_list.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"Pericles001","repoName":"alx-low_level_programming","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"free_list","kind":"function","identStart":100,"identEnd":109,"extentStart":100,"extentEnd":123,"fullyQualifiedName":"free_list","identUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":14}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":5},"end":{"lineNumber":8,"utf16Col":28}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/Pericles001/alx-low_level_programming/branches":{"post":"0lk4zgIOuATlzpfqUtHjoKEOcsw3nMZsaUb1H4q7B_0Y-Xbwgm_Tb30OGzKdrTS_WrsAgJ4Aee5OIMl40Q604g"},"/repos/preferences":{"post":"65o55vlb1R394cY3piy0ilghvrKfxDjjpHrFeDdIKyDYZu3QgdD5Dw66sfCIPSJ1q_39oeD6zKLk6hHddB-dLg"}}},"title":"alx-low_level_programming/0x12-singly_linked_lists/4-free_list.c at master · Pericles001/alx-low_level_programming"}