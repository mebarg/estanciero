
recovered/0.45/estanciero.exe:     file format pei-i386


Disassembly of section .text:

004832e0 <.text+0x822e0>:
  4832e0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4832e5:	53                   	push   ebx
  4832e6:	55                   	push   ebp
  4832e7:	56                   	push   esi
  4832e8:	8b 35 30 11 40 00    	mov    esi,DWORD PTR ds:0x401130
  4832ee:	66 c7 00 00 00       	mov    WORD PTR [eax],0x0
  4832f3:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4832f9:	57                   	push   edi
  4832fa:	ba 8c 14 47 00       	mov    edx,0x47148c
  4832ff:	83 c1 04             	add    ecx,0x4
  483302:	ff d6                	call   esi
  483304:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483309:	ba 20 22 47 00       	mov    edx,0x472220
  48330e:	8d 48 08             	lea    ecx,[eax+0x8]
  483311:	ff d6                	call   esi
  483313:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483319:	b8 00 00 06 44       	mov    eax,0x44060000
  48331e:	bb 00 00 28 44       	mov    ebx,0x44280000
  483323:	c7 41 10 00 40 9c 45 	mov    DWORD PTR [ecx+0x10],0x459c4000
  48332a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483330:	89 42 34             	mov    DWORD PTR [edx+0x34],eax
  483333:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483339:	89 41 38             	mov    DWORD PTR [ecx+0x38],eax
  48333c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483342:	89 42 3c             	mov    DWORD PTR [edx+0x3c],eax
  483345:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48334b:	b8 00 00 0d 44       	mov    eax,0x440d0000
  483350:	89 41 40             	mov    DWORD PTR [ecx+0x40],eax
  483353:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483359:	89 42 44             	mov    DWORD PTR [edx+0x44],eax
  48335c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483361:	c7 40 48 00 00 12 44 	mov    DWORD PTR [eax+0x48],0x44120000
  483368:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48336e:	c7 41 4c 00 00 1b 44 	mov    DWORD PTR [ecx+0x4c],0x441b0000
  483375:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48337b:	c7 42 50 00 00 21 44 	mov    DWORD PTR [edx+0x50],0x44210000
  483382:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483387:	c7 40 54 00 00 27 44 	mov    DWORD PTR [eax+0x54],0x44270000
  48338e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483394:	89 59 58             	mov    DWORD PTR [ecx+0x58],ebx
  483397:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48339d:	c7 42 5c 00 00 1e 44 	mov    DWORD PTR [edx+0x5c],0x441e0000
  4833a4:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4833a9:	ba a8 13 47 00       	mov    edx,0x4713a8
  4833ae:	c7 40 60 00 00 23 44 	mov    DWORD PTR [eax+0x60],0x44230000
  4833b5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4833bb:	66 c7 41 74 01 00    	mov    WORD PTR [ecx+0x74],0x1
  4833c1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4833c6:	8d 48 78             	lea    ecx,[eax+0x78]
  4833c9:	ff d6                	call   esi
  4833cb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4833d1:	ba 34 22 47 00       	mov    edx,0x472234
  4833d6:	83 c1 7c             	add    ecx,0x7c
  4833d9:	ff d6                	call   esi
  4833db:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4833e0:	ba b0 21 47 00       	mov    edx,0x4721b0
  4833e5:	8d 88 80 00 00 00    	lea    ecx,[eax+0x80]
  4833eb:	ff d6                	call   esi
  4833ed:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4833f3:	bf 00 00 7a 44       	mov    edi,0x447a0000
  4833f8:	89 b9 84 00 00 00    	mov    DWORD PTR [ecx+0x84],edi
  4833fe:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483404:	b9 00 00 16 44       	mov    ecx,0x44160000
  483409:	c7 82 88 00 00 00 00 	mov    DWORD PTR [edx+0x88],0x42200000
  483410:	00 20 42 
  483413:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483418:	c7 80 8c 00 00 00 00 	mov    DWORD PTR [eax+0x8c],0x43480000
  48341f:	00 48 43 
  483422:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483428:	89 8a 90 00 00 00    	mov    DWORD PTR [edx+0x90],ecx
  48342e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483433:	c7 80 94 00 00 00 00 	mov    DWORD PTR [eax+0x94],0x44d48000
  48343a:	80 d4 44 
  48343d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483443:	c7 82 98 00 00 00 00 	mov    DWORD PTR [edx+0x98],0x453b8000
  48344a:	80 3b 45 
  48344d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483452:	c7 80 9c 00 00 00 00 	mov    DWORD PTR [eax+0x9c],0x45947000
  483459:	70 94 45 
  48345c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483462:	89 ba a0 00 00 00    	mov    DWORD PTR [edx+0xa0],edi
  483468:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48346d:	89 b8 a4 00 00 00    	mov    DWORD PTR [eax+0xa4],edi
  483473:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483479:	b8 00 00 f4 43       	mov    eax,0x43f40000
  48347e:	89 82 a8 00 00 00    	mov    DWORD PTR [edx+0xa8],eax
  483484:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48348a:	bd 00 00 1c 44       	mov    ebp,0x441c0000
  48348f:	89 82 ac 00 00 00    	mov    DWORD PTR [edx+0xac],eax
  483495:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48349b:	89 82 b0 00 00 00    	mov    DWORD PTR [edx+0xb0],eax
  4834a1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4834a7:	89 82 b4 00 00 00    	mov    DWORD PTR [edx+0xb4],eax
  4834ad:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4834b3:	b8 00 00 00 44       	mov    eax,0x44000000
  4834b8:	89 82 b8 00 00 00    	mov    DWORD PTR [edx+0xb8],eax
  4834be:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4834c4:	89 82 bc 00 00 00    	mov    DWORD PTR [edx+0xbc],eax
  4834ca:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4834cf:	89 88 c0 00 00 00    	mov    DWORD PTR [eax+0xc0],ecx
  4834d5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4834db:	89 a9 c4 00 00 00    	mov    DWORD PTR [ecx+0xc4],ebp
  4834e1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4834e7:	c7 82 c8 00 00 00 00 	mov    DWORD PTR [edx+0xc8],0x44220000
  4834ee:	00 22 44 
  4834f1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4834f6:	89 98 cc 00 00 00    	mov    DWORD PTR [eax+0xcc],ebx
  4834fc:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483502:	c7 81 d0 00 00 00 00 	mov    DWORD PTR [ecx+0xd0],0x441a0000
  483509:	00 1a 44 
  48350c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483512:	c7 82 d4 00 00 00 00 	mov    DWORD PTR [edx+0xd4],0x44240000
  483519:	00 24 44 
  48351c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483521:	ba c8 21 47 00       	mov    edx,0x4721c8
  483526:	c7 80 dc 00 00 00 00 	mov    DWORD PTR [eax+0xdc],0x43fa0000
  48352d:	00 fa 43 
  483530:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483536:	81 c1 e4 00 00 00    	add    ecx,0xe4
  48353c:	ff d6                	call   esi
  48353e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483544:	66 c7 82 e8 00 00 00 	mov    WORD PTR [edx+0xe8],0x2
  48354b:	02 00 
  48354d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483552:	ba a8 13 47 00       	mov    edx,0x4713a8
  483557:	8d 88 ec 00 00 00    	lea    ecx,[eax+0xec]
  48355d:	ff d6                	call   esi
  48355f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483565:	ba 34 22 47 00       	mov    edx,0x472234
  48356a:	81 c1 f0 00 00 00    	add    ecx,0xf0
  483570:	ff d6                	call   esi
  483572:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483577:	ba 68 22 47 00       	mov    edx,0x472268
  48357c:	8d 88 f4 00 00 00    	lea    ecx,[eax+0xf4]
  483582:	ff d6                	call   esi
  483584:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48358a:	89 b9 f8 00 00 00    	mov    DWORD PTR [ecx+0xf8],edi
  483590:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483596:	b9 00 00 16 44       	mov    ecx,0x44160000
  48359b:	c7 82 fc 00 00 00 00 	mov    DWORD PTR [edx+0xfc],0x42200000
  4835a2:	00 20 42 
  4835a5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4835aa:	c7 80 00 01 00 00 00 	mov    DWORD PTR [eax+0x100],0x43480000
  4835b1:	00 48 43 
  4835b4:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4835ba:	89 8a 04 01 00 00    	mov    DWORD PTR [edx+0x104],ecx
  4835c0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4835c5:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x44d48000
  4835cc:	80 d4 44 
  4835cf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4835d5:	c7 82 0c 01 00 00 00 	mov    DWORD PTR [edx+0x10c],0x453b8000
  4835dc:	80 3b 45 
  4835df:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4835e4:	c7 80 10 01 00 00 00 	mov    DWORD PTR [eax+0x110],0x45947000
  4835eb:	70 94 45 
  4835ee:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4835f4:	89 ba 14 01 00 00    	mov    DWORD PTR [edx+0x114],edi
  4835fa:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4835ff:	89 b8 18 01 00 00    	mov    DWORD PTR [eax+0x118],edi
  483605:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48360b:	b8 00 00 dc 43       	mov    eax,0x43dc0000
  483610:	89 82 1c 01 00 00    	mov    DWORD PTR [edx+0x11c],eax
  483616:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48361c:	89 82 20 01 00 00    	mov    DWORD PTR [edx+0x120],eax
  483622:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483628:	89 82 24 01 00 00    	mov    DWORD PTR [edx+0x124],eax
  48362e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483634:	89 82 28 01 00 00    	mov    DWORD PTR [edx+0x128],eax
  48363a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483640:	b8 00 00 e8 43       	mov    eax,0x43e80000
  483645:	89 82 2c 01 00 00    	mov    DWORD PTR [edx+0x12c],eax
  48364b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483651:	89 82 30 01 00 00    	mov    DWORD PTR [edx+0x130],eax
  483657:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48365c:	89 88 34 01 00 00    	mov    DWORD PTR [eax+0x134],ecx
  483662:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483668:	89 a9 38 01 00 00    	mov    DWORD PTR [ecx+0x138],ebp
  48366e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483674:	c7 82 3c 01 00 00 00 	mov    DWORD PTR [edx+0x13c],0x44220000
  48367b:	00 22 44 
  48367e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483683:	89 98 40 01 00 00    	mov    DWORD PTR [eax+0x140],ebx
  483689:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48368f:	c7 81 44 01 00 00 00 	mov    DWORD PTR [ecx+0x144],0x441a0000
  483696:	00 1a 44 
  483699:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48369f:	c7 82 48 01 00 00 00 	mov    DWORD PTR [edx+0x148],0x44240000
  4836a6:	00 24 44 
  4836a9:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4836ae:	ba 84 22 47 00       	mov    edx,0x472284
  4836b3:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x43fa0000
  4836ba:	00 fa 43 
  4836bd:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4836c3:	81 c1 58 01 00 00    	add    ecx,0x158
  4836c9:	ff d6                	call   esi
  4836cb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4836d1:	66 c7 82 5c 01 00 00 	mov    WORD PTR [edx+0x15c],0x3
  4836d8:	03 00 
  4836da:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4836df:	ba a8 13 47 00       	mov    edx,0x4713a8
  4836e4:	8d 88 60 01 00 00    	lea    ecx,[eax+0x160]
  4836ea:	ff d6                	call   esi
  4836ec:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4836f2:	ba 34 22 47 00       	mov    edx,0x472234
  4836f7:	81 c1 64 01 00 00    	add    ecx,0x164
  4836fd:	ff d6                	call   esi
  4836ff:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483704:	ba 90 22 47 00       	mov    edx,0x472290
  483709:	8d 88 68 01 00 00    	lea    ecx,[eax+0x168]
  48370f:	ff d6                	call   esi
  483711:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483717:	b8 00 00 c8 43       	mov    eax,0x43c80000
  48371c:	c7 81 6c 01 00 00 00 	mov    DWORD PTR [ecx+0x16c],0x44960000
  483723:	00 96 44 
  483726:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48372c:	c7 82 70 01 00 00 00 	mov    DWORD PTR [edx+0x170],0x42a00000
  483733:	00 a0 42 
  483736:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48373c:	89 81 74 01 00 00    	mov    DWORD PTR [ecx+0x174],eax
  483742:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483748:	c7 82 78 01 00 00 00 	mov    DWORD PTR [edx+0x178],0x44480000
  48374f:	00 48 44 
  483752:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483758:	c7 81 7c 01 00 00 00 	mov    DWORD PTR [ecx+0x17c],0x45548000
  48375f:	80 54 45 
  483762:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483768:	c7 82 80 01 00 00 00 	mov    DWORD PTR [edx+0x180],0x45bb8000
  48376f:	80 bb 45 
  483772:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483778:	c7 81 84 01 00 00 00 	mov    DWORD PTR [ecx+0x184],0x46147000
  48377f:	70 14 46 
  483782:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483788:	89 ba 88 01 00 00    	mov    DWORD PTR [edx+0x188],edi
  48378e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483794:	89 b9 8c 01 00 00    	mov    DWORD PTR [ecx+0x18c],edi
  48379a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4837a0:	89 82 90 01 00 00    	mov    DWORD PTR [edx+0x190],eax
  4837a6:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4837ac:	89 81 94 01 00 00    	mov    DWORD PTR [ecx+0x194],eax
  4837b2:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4837b8:	89 82 98 01 00 00    	mov    DWORD PTR [edx+0x198],eax
  4837be:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4837c4:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
  4837ca:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4837d0:	b8 00 00 d1 43       	mov    eax,0x43d10000
  4837d5:	89 82 a0 01 00 00    	mov    DWORD PTR [edx+0x1a0],eax
  4837db:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4837e1:	89 81 a4 01 00 00    	mov    DWORD PTR [ecx+0x1a4],eax
  4837e7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4837ed:	b8 00 00 16 44       	mov    eax,0x44160000
  4837f2:	89 82 a8 01 00 00    	mov    DWORD PTR [edx+0x1a8],eax
  4837f8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4837fe:	89 a9 ac 01 00 00    	mov    DWORD PTR [ecx+0x1ac],ebp
  483804:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48380a:	c7 82 b0 01 00 00 00 	mov    DWORD PTR [edx+0x1b0],0x44220000
  483811:	00 22 44 
  483814:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48381a:	89 99 b4 01 00 00    	mov    DWORD PTR [ecx+0x1b4],ebx
  483820:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483826:	c7 82 b8 01 00 00 00 	mov    DWORD PTR [edx+0x1b8],0x441a0000
  48382d:	00 1a 44 
  483830:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483836:	c7 81 bc 01 00 00 00 	mov    DWORD PTR [ecx+0x1bc],0x44240000
  48383d:	00 24 44 
  483840:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483846:	89 82 c4 01 00 00    	mov    DWORD PTR [edx+0x1c4],eax
  48384c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483851:	ba ac 22 47 00       	mov    edx,0x4722ac
  483856:	8d 88 cc 01 00 00    	lea    ecx,[eax+0x1cc]
  48385c:	ff d6                	call   esi
  48385e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483864:	66 c7 81 d0 01 00 00 	mov    WORD PTR [ecx+0x1d0],0x4
  48386b:	04 00 
  48386d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483872:	ba 8c 14 47 00       	mov    edx,0x47148c
  483877:	8d 88 d4 01 00 00    	lea    ecx,[eax+0x1d4]
  48387d:	ff d6                	call   esi
  48387f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483885:	ba b8 22 47 00       	mov    edx,0x4722b8
  48388a:	81 c1 d8 01 00 00    	add    ecx,0x1d8
  483890:	ff d6                	call   esi
  483892:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483898:	b8 00 00 b4 43       	mov    eax,0x43b40000
  48389d:	c7 82 e0 01 00 00 00 	mov    DWORD PTR [edx+0x1e0],0x459c4000
  4838a4:	40 9c 45 
  4838a7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4838ad:	89 81 04 02 00 00    	mov    DWORD PTR [ecx+0x204],eax
  4838b3:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4838b9:	89 82 08 02 00 00    	mov    DWORD PTR [edx+0x208],eax
  4838bf:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4838c5:	89 81 0c 02 00 00    	mov    DWORD PTR [ecx+0x20c],eax
  4838cb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4838d1:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
  4838d7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4838dd:	b8 00 00 bd 43       	mov    eax,0x43bd0000
  4838e2:	89 81 14 02 00 00    	mov    DWORD PTR [ecx+0x214],eax
  4838e8:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4838ee:	89 82 18 02 00 00    	mov    DWORD PTR [edx+0x218],eax
  4838f4:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4838f9:	c7 80 1c 02 00 00 00 	mov    DWORD PTR [eax+0x21c],0x44160000
  483900:	00 16 44 
  483903:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483909:	89 a9 20 02 00 00    	mov    DWORD PTR [ecx+0x220],ebp
  48390f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483915:	c7 82 24 02 00 00 00 	mov    DWORD PTR [edx+0x224],0x44220000
  48391c:	00 22 44 
  48391f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483924:	89 98 28 02 00 00    	mov    DWORD PTR [eax+0x228],ebx
  48392a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483930:	c7 81 2c 02 00 00 00 	mov    DWORD PTR [ecx+0x22c],0x441a0000
  483937:	00 1a 44 
  48393a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483940:	c7 82 30 02 00 00 00 	mov    DWORD PTR [edx+0x230],0x44240000
  483947:	00 24 44 
  48394a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48394f:	ba a8 13 47 00       	mov    edx,0x4713a8
  483954:	66 c7 80 44 02 00 00 	mov    WORD PTR [eax+0x244],0x5
  48395b:	05 00 
  48395d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483963:	81 c1 48 02 00 00    	add    ecx,0x248
  483969:	ff d6                	call   esi
  48396b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483970:	ba ec 22 47 00       	mov    edx,0x4722ec
  483975:	8d 88 4c 02 00 00    	lea    ecx,[eax+0x24c]
  48397b:	ff d6                	call   esi
  48397d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483983:	ba b0 21 47 00       	mov    edx,0x4721b0
  483988:	81 c1 50 02 00 00    	add    ecx,0x250
  48398e:	ff d6                	call   esi
  483990:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483996:	c7 82 54 02 00 00 00 	mov    DWORD PTR [edx+0x254],0x44fa0000
  48399d:	00 fa 44 
  4839a0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4839a5:	c7 80 58 02 00 00 00 	mov    DWORD PTR [eax+0x258],0x42dc0000
  4839ac:	00 dc 42 
  4839af:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4839b5:	c7 81 5c 02 00 00 00 	mov    DWORD PTR [ecx+0x25c],0x440e8000
  4839bc:	80 0e 44 
  4839bf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4839c5:	c7 82 60 02 00 00 00 	mov    DWORD PTR [edx+0x260],0x44d48000
  4839cc:	80 d4 44 
  4839cf:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4839d4:	c7 80 64 02 00 00 00 	mov    DWORD PTR [eax+0x264],0x45a0f000
  4839db:	f0 a0 45 
  4839de:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4839e4:	c7 81 68 02 00 00 00 	mov    DWORD PTR [ecx+0x268],0x45ed8000
  4839eb:	80 ed 45 
  4839ee:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4839f4:	c7 82 6c 02 00 00 00 	mov    DWORD PTR [edx+0x26c],0x46147000
  4839fb:	70 14 46 
  4839fe:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483a03:	89 b8 70 02 00 00    	mov    DWORD PTR [eax+0x270],edi
  483a09:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483a0f:	b8 00 00 9c 43       	mov    eax,0x439c0000
  483a14:	89 b9 74 02 00 00    	mov    DWORD PTR [ecx+0x274],edi
  483a1a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483a20:	89 82 78 02 00 00    	mov    DWORD PTR [edx+0x278],eax
  483a26:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483a2c:	89 81 7c 02 00 00    	mov    DWORD PTR [ecx+0x27c],eax
  483a32:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483a38:	89 82 80 02 00 00    	mov    DWORD PTR [edx+0x280],eax
  483a3e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483a44:	89 81 84 02 00 00    	mov    DWORD PTR [ecx+0x284],eax
  483a4a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483a50:	b8 00 00 a8 43       	mov    eax,0x43a80000
  483a55:	89 82 88 02 00 00    	mov    DWORD PTR [edx+0x288],eax
  483a5b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483a61:	89 81 8c 02 00 00    	mov    DWORD PTR [ecx+0x28c],eax
  483a67:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483a6d:	c7 82 90 02 00 00 00 	mov    DWORD PTR [edx+0x290],0x44160000
  483a74:	00 16 44 
  483a77:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483a7c:	89 a8 94 02 00 00    	mov    DWORD PTR [eax+0x294],ebp
  483a82:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483a88:	c7 81 98 02 00 00 00 	mov    DWORD PTR [ecx+0x298],0x44220000
  483a8f:	00 22 44 
  483a92:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483a98:	89 9a 9c 02 00 00    	mov    DWORD PTR [edx+0x29c],ebx
  483a9e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483aa3:	c7 80 a0 02 00 00 00 	mov    DWORD PTR [eax+0x2a0],0x441a0000
  483aaa:	00 1a 44 
  483aad:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483ab3:	c7 81 a4 02 00 00 00 	mov    DWORD PTR [ecx+0x2a4],0x44240000
  483aba:	00 24 44 
  483abd:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483ac3:	89 ba ac 02 00 00    	mov    DWORD PTR [edx+0x2ac],edi
  483ac9:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483ace:	ba 10 23 47 00       	mov    edx,0x472310
  483ad3:	8d 88 b4 02 00 00    	lea    ecx,[eax+0x2b4]
  483ad9:	ff d6                	call   esi
  483adb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483ae1:	ba a8 13 47 00       	mov    edx,0x4713a8
  483ae6:	66 c7 81 b8 02 00 00 	mov    WORD PTR [ecx+0x2b8],0x6
  483aed:	06 00 
  483aef:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483af4:	8d 88 bc 02 00 00    	lea    ecx,[eax+0x2bc]
  483afa:	ff d6                	call   esi
  483afc:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483b02:	ba ec 22 47 00       	mov    edx,0x4722ec
  483b07:	81 c1 c0 02 00 00    	add    ecx,0x2c0
  483b0d:	ff d6                	call   esi
  483b0f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483b14:	ba 90 22 47 00       	mov    edx,0x472290
  483b19:	8d 88 c4 02 00 00    	lea    ecx,[eax+0x2c4]
  483b1f:	ff d6                	call   esi
  483b21:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483b27:	c7 81 c8 02 00 00 00 	mov    DWORD PTR [ecx+0x2c8],0x45098000
  483b2e:	80 09 45 
  483b31:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483b37:	c7 82 cc 02 00 00 00 	mov    DWORD PTR [edx+0x2cc],0x43160000
  483b3e:	00 16 43 
  483b41:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483b46:	c7 80 d0 02 00 00 00 	mov    DWORD PTR [eax+0x2d0],0x443b8000
  483b4d:	80 3b 44 
  483b50:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483b56:	c7 81 d4 02 00 00 00 	mov    DWORD PTR [ecx+0x2d4],0x44fa0000
  483b5d:	00 fa 44 
  483b60:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483b66:	c7 82 d8 02 00 00 00 	mov    DWORD PTR [edx+0x2d8],0x45b22000
  483b6d:	20 b2 45 
  483b70:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483b75:	c7 80 dc 02 00 00 00 	mov    DWORD PTR [eax+0x2dc],0x4604d000
  483b7c:	d0 04 46 
  483b7f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483b85:	c7 81 e0 02 00 00 00 	mov    DWORD PTR [ecx+0x2e0],0x4633b000
  483b8c:	b0 33 46 
  483b8f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483b95:	89 ba e4 02 00 00    	mov    DWORD PTR [edx+0x2e4],edi
  483b9b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483ba0:	89 b8 e8 02 00 00    	mov    DWORD PTR [eax+0x2e8],edi
  483ba6:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483bac:	b8 00 00 84 43       	mov    eax,0x43840000
  483bb1:	89 81 ec 02 00 00    	mov    DWORD PTR [ecx+0x2ec],eax
  483bb7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483bbd:	89 82 f0 02 00 00    	mov    DWORD PTR [edx+0x2f0],eax
  483bc3:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483bc9:	89 81 f4 02 00 00    	mov    DWORD PTR [ecx+0x2f4],eax
  483bcf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483bd5:	89 82 f8 02 00 00    	mov    DWORD PTR [edx+0x2f8],eax
  483bdb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483be1:	b8 00 00 90 43       	mov    eax,0x43900000
  483be6:	89 81 fc 02 00 00    	mov    DWORD PTR [ecx+0x2fc],eax
  483bec:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483bf2:	89 82 00 03 00 00    	mov    DWORD PTR [edx+0x300],eax
  483bf8:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483bfd:	c7 80 04 03 00 00 00 	mov    DWORD PTR [eax+0x304],0x44160000
  483c04:	00 16 44 
  483c07:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483c0d:	89 a9 08 03 00 00    	mov    DWORD PTR [ecx+0x308],ebp
  483c13:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483c19:	c7 82 0c 03 00 00 00 	mov    DWORD PTR [edx+0x30c],0x44220000
  483c20:	00 22 44 
  483c23:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483c28:	89 98 10 03 00 00    	mov    DWORD PTR [eax+0x310],ebx
  483c2e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483c34:	c7 81 14 03 00 00 00 	mov    DWORD PTR [ecx+0x314],0x441a0000
  483c3b:	00 1a 44 
  483c3e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483c44:	c7 82 18 03 00 00 00 	mov    DWORD PTR [edx+0x318],0x44240000
  483c4b:	00 24 44 
  483c4e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483c53:	ba 18 23 47 00       	mov    edx,0x472318
  483c58:	89 b8 20 03 00 00    	mov    DWORD PTR [eax+0x320],edi
  483c5e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483c64:	81 c1 28 03 00 00    	add    ecx,0x328
  483c6a:	ff d6                	call   esi
  483c6c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483c72:	66 c7 82 2c 03 00 00 	mov    WORD PTR [edx+0x32c],0x7
  483c79:	07 00 
  483c7b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483c80:	ba 8c 14 47 00       	mov    edx,0x47148c
  483c85:	8d 88 30 03 00 00    	lea    ecx,[eax+0x330]
  483c8b:	ff d6                	call   esi
  483c8d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483c93:	ba 20 23 47 00       	mov    edx,0x472320
  483c98:	81 c1 34 03 00 00    	add    ecx,0x334
  483c9e:	ff d6                	call   esi
  483ca0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483ca6:	b8 00 00 70 43       	mov    eax,0x43700000
  483cab:	c7 82 3c 03 00 00 00 	mov    DWORD PTR [edx+0x33c],0x451c4000
  483cb2:	40 1c 45 
  483cb5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483cbb:	89 81 60 03 00 00    	mov    DWORD PTR [ecx+0x360],eax
  483cc1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483cc7:	c7 82 64 03 00 00 00 	mov    DWORD PTR [edx+0x364],0x43580000
  483cce:	00 58 43 
  483cd1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483cd7:	c7 81 68 03 00 00 00 	mov    DWORD PTR [ecx+0x368],0x43400000
  483cde:	00 40 43 
  483ce1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483ce7:	c7 82 6c 03 00 00 00 	mov    DWORD PTR [edx+0x36c],0x43500000
  483cee:	00 50 43 
  483cf1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483cf7:	89 81 70 03 00 00    	mov    DWORD PTR [ecx+0x370],eax
  483cfd:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483d03:	89 82 74 03 00 00    	mov    DWORD PTR [edx+0x374],eax
  483d09:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483d0e:	c7 80 78 03 00 00 00 	mov    DWORD PTR [eax+0x378],0x44180000
  483d15:	00 18 44 
  483d18:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483d1e:	b8 00 00 20 44       	mov    eax,0x44200000
  483d23:	89 a9 7c 03 00 00    	mov    DWORD PTR [ecx+0x37c],ebp
  483d29:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483d2f:	89 82 80 03 00 00    	mov    DWORD PTR [edx+0x380],eax
  483d35:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483d3b:	c7 81 84 03 00 00 00 	mov    DWORD PTR [ecx+0x384],0x44260000
  483d42:	00 26 44 
  483d45:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483d4b:	89 82 88 03 00 00    	mov    DWORD PTR [edx+0x388],eax
  483d51:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483d56:	ba b8 13 47 00       	mov    edx,0x4713b8
  483d5b:	89 98 8c 03 00 00    	mov    DWORD PTR [eax+0x38c],ebx
  483d61:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483d67:	66 c7 81 a0 03 00 00 	mov    WORD PTR [ecx+0x3a0],0x8
  483d6e:	08 00 
  483d70:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483d75:	8d 88 a4 03 00 00    	lea    ecx,[eax+0x3a4]
  483d7b:	ff d6                	call   esi
  483d7d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483d83:	ba 44 23 47 00       	mov    edx,0x472344
  483d88:	81 c1 a8 03 00 00    	add    ecx,0x3a8
  483d8e:	ff d6                	call   esi
  483d90:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483d96:	bd 00 00 30 43       	mov    ebp,0x43300000
  483d9b:	c7 82 b0 03 00 00 00 	mov    DWORD PTR [edx+0x3b0],0x456d8000
  483da2:	80 6d 45 
  483da5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483daa:	c7 80 d4 03 00 00 00 	mov    DWORD PTR [eax+0x3d4],0x43600000
  483db1:	00 60 43 
  483db4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483dba:	c7 81 d8 03 00 00 00 	mov    DWORD PTR [ecx+0x3d8],0x43480000
  483dc1:	00 48 43 
  483dc4:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483dca:	89 aa dc 03 00 00    	mov    DWORD PTR [edx+0x3dc],ebp
  483dd0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483dd5:	c7 80 e0 03 00 00 00 	mov    DWORD PTR [eax+0x3e0],0x43180000
  483ddc:	00 18 43 
  483ddf:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483de5:	c7 81 e4 03 00 00 00 	mov    DWORD PTR [ecx+0x3e4],0x43500000
  483dec:	00 50 43 
  483def:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483df5:	89 aa e8 03 00 00    	mov    DWORD PTR [edx+0x3e8],ebp
  483dfb:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483e00:	c7 80 ec 03 00 00 00 	mov    DWORD PTR [eax+0x3ec],0x440e0000
  483e07:	00 0e 44 
  483e0a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483e10:	c7 81 f0 03 00 00 00 	mov    DWORD PTR [ecx+0x3f0],0x44100000
  483e17:	00 10 44 
  483e1a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483e20:	c7 82 f4 03 00 00 00 	mov    DWORD PTR [edx+0x3f4],0x44140000
  483e27:	00 14 44 
  483e2a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483e2f:	c7 80 f8 03 00 00 00 	mov    DWORD PTR [eax+0x3f8],0x44180000
  483e36:	00 18 44 
  483e39:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483e3f:	c7 81 fc 03 00 00 00 	mov    DWORD PTR [ecx+0x3fc],0x44160000
  483e46:	00 16 44 
  483e49:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483e4f:	c7 82 00 04 00 00 00 	mov    DWORD PTR [edx+0x400],0x441a0000
  483e56:	00 1a 44 
  483e59:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483e5e:	c7 80 08 04 00 00 00 	mov    DWORD PTR [eax+0x408],0x44ed8000
  483e65:	80 ed 44 
  483e68:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483e6e:	66 c7 81 14 04 00 00 	mov    WORD PTR [ecx+0x414],0x9
  483e75:	09 00 
  483e77:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483e7c:	ba a8 13 47 00       	mov    edx,0x4713a8
  483e81:	8d 88 18 04 00 00    	lea    ecx,[eax+0x418]
  483e87:	ff d6                	call   esi
  483e89:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483e8f:	ba 70 23 47 00       	mov    edx,0x472370
  483e94:	81 c1 1c 04 00 00    	add    ecx,0x41c
  483e9a:	ff d6                	call   esi
  483e9c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483ea1:	ba b0 21 47 00       	mov    edx,0x4721b0
  483ea6:	8d 88 20 04 00 00    	lea    ecx,[eax+0x420]
  483eac:	ff d6                	call   esi
  483eae:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483eb4:	b8 00 00 48 43       	mov    eax,0x43480000
  483eb9:	c7 81 24 04 00 00 00 	mov    DWORD PTR [ecx+0x424],0x45228000
  483ec0:	80 22 45 
  483ec3:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483ec9:	89 82 28 04 00 00    	mov    DWORD PTR [edx+0x428],eax
  483ecf:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483ed5:	89 b9 2c 04 00 00    	mov    DWORD PTR [ecx+0x42c],edi
  483edb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483ee1:	c7 82 30 04 00 00 00 	mov    DWORD PTR [edx+0x430],0x452f0000
  483ee8:	00 2f 45 
  483eeb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483ef1:	c7 81 34 04 00 00 00 	mov    DWORD PTR [ecx+0x434],0x4604d000
  483ef8:	d0 04 46 
  483efb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483f01:	c7 82 38 04 00 00 00 	mov    DWORD PTR [edx+0x438],0x463b8000
  483f08:	80 3b 46 
  483f0b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483f11:	c7 81 3c 04 00 00 00 	mov    DWORD PTR [ecx+0x43c],0x465de000
  483f18:	e0 5d 46 
  483f1b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483f21:	89 ba 40 04 00 00    	mov    DWORD PTR [edx+0x440],edi
  483f27:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483f2d:	89 b9 44 04 00 00    	mov    DWORD PTR [ecx+0x444],edi
  483f33:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483f39:	89 82 48 04 00 00    	mov    DWORD PTR [edx+0x448],eax
  483f3f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483f44:	89 a8 4c 04 00 00    	mov    DWORD PTR [eax+0x44c],ebp
  483f4a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483f50:	b8 00 00 18 43       	mov    eax,0x43180000
  483f55:	89 81 50 04 00 00    	mov    DWORD PTR [ecx+0x450],eax
  483f5b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483f61:	c7 82 54 04 00 00 00 	mov    DWORD PTR [edx+0x454],0x43000000
  483f68:	00 00 43 
  483f6b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483f71:	89 a9 58 04 00 00    	mov    DWORD PTR [ecx+0x458],ebp
  483f77:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483f7d:	89 82 5c 04 00 00    	mov    DWORD PTR [edx+0x45c],eax
  483f83:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483f88:	c7 80 60 04 00 00 00 	mov    DWORD PTR [eax+0x460],0x44040000
  483f8f:	00 04 44 
  483f92:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483f98:	c7 81 64 04 00 00 00 	mov    DWORD PTR [ecx+0x464],0x44060000
  483f9f:	00 06 44 
  483fa2:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483fa8:	c7 82 68 04 00 00 00 	mov    DWORD PTR [edx+0x468],0x440a0000
  483faf:	00 0a 44 
  483fb2:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483fb7:	c7 80 6c 04 00 00 00 	mov    DWORD PTR [eax+0x46c],0x440e0000
  483fbe:	00 0e 44 
  483fc1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483fc7:	c7 81 70 04 00 00 00 	mov    DWORD PTR [ecx+0x470],0x440c0000
  483fce:	00 0c 44 
  483fd1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  483fd7:	c7 82 74 04 00 00 00 	mov    DWORD PTR [edx+0x474],0x44100000
  483fde:	00 10 44 
  483fe1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  483fe6:	ba 8c 23 47 00       	mov    edx,0x47238c
  483feb:	c7 80 7c 04 00 00 00 	mov    DWORD PTR [eax+0x47c],0x44a28000
  483ff2:	80 a2 44 
  483ff5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  483ffb:	81 c1 84 04 00 00    	add    ecx,0x484
  484001:	ff d6                	call   esi
  484003:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484009:	66 c7 82 88 04 00 00 	mov    WORD PTR [edx+0x488],0xa
  484010:	0a 00 
  484012:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484017:	ba 7c 14 47 00       	mov    edx,0x47147c
  48401c:	8d 88 8c 04 00 00    	lea    ecx,[eax+0x48c]
  484022:	ff d6                	call   esi
  484024:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48402a:	ba 9c 23 47 00       	mov    edx,0x47239c
  48402f:	81 c1 90 04 00 00    	add    ecx,0x490
  484035:	ff d6                	call   esi
  484037:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48403d:	89 aa bc 04 00 00    	mov    DWORD PTR [edx+0x4bc],ebp
  484043:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484048:	bd 00 00 d0 42       	mov    ebp,0x42d00000
  48404d:	c7 80 c0 04 00 00 00 	mov    DWORD PTR [eax+0x4c0],0x43180000
  484054:	00 18 43 
  484057:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48405d:	b8 00 00 00 43       	mov    eax,0x43000000
  484062:	89 81 c4 04 00 00    	mov    DWORD PTR [ecx+0x4c4],eax
  484068:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48406e:	89 aa c8 04 00 00    	mov    DWORD PTR [edx+0x4c8],ebp
  484074:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48407a:	c7 81 cc 04 00 00 00 	mov    DWORD PTR [ecx+0x4cc],0x43200000
  484081:	00 20 43 
  484084:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48408a:	89 82 d0 04 00 00    	mov    DWORD PTR [edx+0x4d0],eax
  484090:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484095:	c7 80 d4 04 00 00 00 	mov    DWORD PTR [eax+0x4d4],0x43f40000
  48409c:	00 f4 43 
  48409f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4840a5:	c7 81 d8 04 00 00 00 	mov    DWORD PTR [ecx+0x4d8],0x43f80000
  4840ac:	00 f8 43 
  4840af:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4840b5:	c7 82 dc 04 00 00 00 	mov    DWORD PTR [edx+0x4dc],0x44000000
  4840bc:	00 00 44 
  4840bf:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4840c4:	c7 80 e0 04 00 00 00 	mov    DWORD PTR [eax+0x4e0],0x44040000
  4840cb:	00 04 44 
  4840ce:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4840d4:	c7 81 e4 04 00 00 00 	mov    DWORD PTR [ecx+0x4e4],0x44020000
  4840db:	00 02 44 
  4840de:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4840e4:	c7 82 e8 04 00 00 00 	mov    DWORD PTR [edx+0x4e8],0x44060000
  4840eb:	00 06 44 
  4840ee:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4840f3:	ba a8 13 47 00       	mov    edx,0x4713a8
  4840f8:	66 c7 80 fc 04 00 00 	mov    WORD PTR [eax+0x4fc],0xb
  4840ff:	0b 00 
  484101:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484107:	81 c1 00 05 00 00    	add    ecx,0x500
  48410d:	ff d6                	call   esi
  48410f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484114:	ba 70 23 47 00       	mov    edx,0x472370
  484119:	8d 88 04 05 00 00    	lea    ecx,[eax+0x504]
  48411f:	ff d6                	call   esi
  484121:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484127:	ba 68 22 47 00       	mov    edx,0x472268
  48412c:	81 c1 08 05 00 00    	add    ecx,0x508
  484132:	ff d6                	call   esi
  484134:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48413a:	c7 82 0c 05 00 00 00 	mov    DWORD PTR [edx+0x50c],0x45228000
  484141:	80 22 45 
  484144:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484149:	c7 80 10 05 00 00 00 	mov    DWORD PTR [eax+0x510],0x43480000
  484150:	00 48 43 
  484153:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484159:	89 b9 14 05 00 00    	mov    DWORD PTR [ecx+0x514],edi
  48415f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484165:	c7 82 18 05 00 00 00 	mov    DWORD PTR [edx+0x518],0x452f0000
  48416c:	00 2f 45 
  48416f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484174:	c7 80 1c 05 00 00 00 	mov    DWORD PTR [eax+0x51c],0x4604d000
  48417b:	d0 04 46 
  48417e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484184:	c7 81 20 05 00 00 00 	mov    DWORD PTR [ecx+0x520],0x463b8000
  48418b:	80 3b 46 
  48418e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484194:	c7 82 24 05 00 00 00 	mov    DWORD PTR [edx+0x524],0x465de000
  48419b:	e0 5d 46 
  48419e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4841a3:	89 b8 28 05 00 00    	mov    DWORD PTR [eax+0x528],edi
  4841a9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4841af:	89 b9 2c 05 00 00    	mov    DWORD PTR [ecx+0x52c],edi
  4841b5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4841bb:	c7 82 30 05 00 00 00 	mov    DWORD PTR [edx+0x530],0x43200000
  4841c2:	00 20 43 
  4841c5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4841ca:	c7 80 34 05 00 00 00 	mov    DWORD PTR [eax+0x534],0x43080000
  4841d1:	00 08 43 
  4841d4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4841da:	89 a9 38 05 00 00    	mov    DWORD PTR [ecx+0x538],ebp
  4841e0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4841e6:	c7 82 3c 05 00 00 00 	mov    DWORD PTR [edx+0x53c],0x42a00000
  4841ed:	00 a0 42 
  4841f0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4841f5:	c7 80 40 05 00 00 00 	mov    DWORD PTR [eax+0x540],0x43000000
  4841fc:	00 00 43 
  4841ff:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484205:	89 a9 44 05 00 00    	mov    DWORD PTR [ecx+0x544],ebp
  48420b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484211:	bd 00 00 e4 43       	mov    ebp,0x43e40000
  484216:	89 aa 48 05 00 00    	mov    DWORD PTR [edx+0x548],ebp
  48421c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484221:	89 a8 4c 05 00 00    	mov    DWORD PTR [eax+0x54c],ebp
  484227:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48422d:	c7 81 50 05 00 00 00 	mov    DWORD PTR [ecx+0x550],0x43ec0000
  484234:	00 ec 43 
  484237:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48423d:	c7 82 54 05 00 00 00 	mov    DWORD PTR [edx+0x554],0x43f40000
  484244:	00 f4 43 
  484247:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48424c:	c7 80 58 05 00 00 00 	mov    DWORD PTR [eax+0x558],0x43f00000
  484253:	00 f0 43 
  484256:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48425c:	c7 81 5c 05 00 00 00 	mov    DWORD PTR [ecx+0x55c],0x43f80000
  484263:	00 f8 43 
  484266:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48426c:	c7 82 64 05 00 00 00 	mov    DWORD PTR [edx+0x564],0x44a28000
  484273:	80 a2 44 
  484276:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48427b:	ba b0 23 47 00       	mov    edx,0x4723b0
  484280:	8d 88 6c 05 00 00    	lea    ecx,[eax+0x56c]
  484286:	ff d6                	call   esi
  484288:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48428e:	66 c7 81 70 05 00 00 	mov    WORD PTR [ecx+0x570],0xc
  484295:	0c 00 
  484297:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48429c:	ba b0 13 47 00       	mov    edx,0x4713b0
  4842a1:	8d 88 74 05 00 00    	lea    ecx,[eax+0x574]
  4842a7:	ff d6                	call   esi
  4842a9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4842af:	ba c0 23 47 00       	mov    edx,0x4723c0
  4842b4:	81 c1 78 05 00 00    	add    ecx,0x578
  4842ba:	ff d6                	call   esi
  4842bc:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4842c2:	c7 82 80 05 00 00 00 	mov    DWORD PTR [edx+0x580],0x45610000
  4842c9:	00 61 45 
  4842cc:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4842d1:	c7 80 88 05 00 00 00 	mov    DWORD PTR [eax+0x588],0x43fa0000
  4842d8:	00 fa 43 
  4842db:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4842e1:	89 b9 8c 05 00 00    	mov    DWORD PTR [ecx+0x58c],edi
  4842e7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4842ed:	c7 82 90 05 00 00 00 	mov    DWORD PTR [edx+0x590],0x44fa0000
  4842f4:	00 fa 44 
  4842f7:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4842fc:	c7 80 94 05 00 00 00 	mov    DWORD PTR [eax+0x594],0x457a0000
  484303:	00 7a 45 
  484306:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48430c:	b8 00 00 00 43       	mov    eax,0x43000000
  484311:	89 81 a4 05 00 00    	mov    DWORD PTR [ecx+0x5a4],eax
  484317:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48431d:	b9 00 00 a0 42       	mov    ecx,0x42a00000
  484322:	c7 82 a8 05 00 00 00 	mov    DWORD PTR [edx+0x5a8],0x42d00000
  484329:	00 d0 42 
  48432c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484332:	89 8a ac 05 00 00    	mov    DWORD PTR [edx+0x5ac],ecx
  484338:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48433e:	c7 82 b0 05 00 00 00 	mov    DWORD PTR [edx+0x5b0],0x42600000
  484345:	00 60 42 
  484348:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48434e:	89 82 b4 05 00 00    	mov    DWORD PTR [edx+0x5b4],eax
  484354:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484359:	89 88 b8 05 00 00    	mov    DWORD PTR [eax+0x5b8],ecx
  48435f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484365:	b8 00 00 d8 43       	mov    eax,0x43d80000
  48436a:	c7 81 bc 05 00 00 00 	mov    DWORD PTR [ecx+0x5bc],0x43cc0000
  484371:	00 cc 43 
  484374:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48437a:	c7 82 c0 05 00 00 00 	mov    DWORD PTR [edx+0x5c0],0x43d40000
  484381:	00 d4 43 
  484384:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48438a:	89 81 c4 05 00 00    	mov    DWORD PTR [ecx+0x5c4],eax
  484390:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484396:	c7 82 c8 05 00 00 00 	mov    DWORD PTR [edx+0x5c8],0x43e00000
  48439d:	00 e0 43 
  4843a0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4843a6:	89 81 cc 05 00 00    	mov    DWORD PTR [ecx+0x5cc],eax
  4843ac:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4843b2:	89 aa d0 05 00 00    	mov    DWORD PTR [edx+0x5d0],ebp
  4843b8:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4843bd:	ba a8 13 47 00       	mov    edx,0x4713a8
  4843c2:	c7 80 d8 05 00 00 00 	mov    DWORD PTR [eax+0x5d8],0x44ed8000
  4843c9:	80 ed 44 
  4843cc:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4843d2:	66 c7 81 e4 05 00 00 	mov    WORD PTR [ecx+0x5e4],0xd
  4843d9:	0d 00 
  4843db:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4843e0:	8d 88 e8 05 00 00    	lea    ecx,[eax+0x5e8]
  4843e6:	ff d6                	call   esi
  4843e8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4843ee:	ba 70 23 47 00       	mov    edx,0x472370
  4843f3:	81 c1 ec 05 00 00    	add    ecx,0x5ec
  4843f9:	ff d6                	call   esi
  4843fb:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484400:	ba 90 22 47 00       	mov    edx,0x472290
  484405:	8d 88 f0 05 00 00    	lea    ecx,[eax+0x5f0]
  48440b:	ff d6                	call   esi
  48440d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484413:	c7 81 f4 05 00 00 00 	mov    DWORD PTR [ecx+0x5f4],0x453b8000
  48441a:	80 3b 45 
  48441d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484423:	c7 82 f8 05 00 00 00 	mov    DWORD PTR [edx+0x5f8],0x43660000
  48442a:	00 66 43 
  48442d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484432:	c7 80 fc 05 00 00 00 	mov    DWORD PTR [eax+0x5fc],0x448fc000
  484439:	c0 8f 44 
  48443c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484442:	c7 81 00 06 00 00 00 	mov    DWORD PTR [ecx+0x600],0x45548000
  484449:	80 54 45 
  48444c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484452:	c7 82 04 06 00 00 00 	mov    DWORD PTR [edx+0x604],0x46147000
  484459:	70 14 46 
  48445c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484461:	c7 80 08 06 00 00 00 	mov    DWORD PTR [eax+0x608],0x464b2000
  484468:	20 4b 46 
  48446b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484471:	c7 81 0c 06 00 00 00 	mov    DWORD PTR [ecx+0x60c],0x4684d000
  484478:	d0 84 46 
  48447b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484481:	89 ba 10 06 00 00    	mov    DWORD PTR [edx+0x610],edi
  484487:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48448c:	89 b8 14 06 00 00    	mov    DWORD PTR [eax+0x614],edi
  484492:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484498:	b8 00 00 d0 42       	mov    eax,0x42d00000
  48449d:	bd 00 00 a0 42       	mov    ebp,0x42a00000
  4844a2:	89 81 18 06 00 00    	mov    DWORD PTR [ecx+0x618],eax
  4844a8:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4844ae:	89 aa 1c 06 00 00    	mov    DWORD PTR [edx+0x61c],ebp
  4844b4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4844ba:	c7 81 20 06 00 00 00 	mov    DWORD PTR [ecx+0x620],0x42600000
  4844c1:	00 60 42 
  4844c4:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4844ca:	c7 82 24 06 00 00 00 	mov    DWORD PTR [edx+0x624],0x42200000
  4844d1:	00 20 42 
  4844d4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4844da:	89 81 28 06 00 00    	mov    DWORD PTR [ecx+0x628],eax
  4844e0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4844e6:	89 aa 2c 06 00 00    	mov    DWORD PTR [edx+0x62c],ebp
  4844ec:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4844f1:	c7 80 30 06 00 00 00 	mov    DWORD PTR [eax+0x630],0x43b80000
  4844f8:	00 b8 43 
  4844fb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484501:	c7 81 34 06 00 00 00 	mov    DWORD PTR [ecx+0x634],0x43c00000
  484508:	00 c0 43 
  48450b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484511:	c7 82 38 06 00 00 00 	mov    DWORD PTR [edx+0x638],0x43c80000
  484518:	00 c8 43 
  48451b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484520:	c7 80 3c 06 00 00 00 	mov    DWORD PTR [eax+0x63c],0x43d00000
  484527:	00 d0 43 
  48452a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484530:	c7 81 40 06 00 00 00 	mov    DWORD PTR [ecx+0x640],0x43c40000
  484537:	00 c4 43 
  48453a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484540:	c7 82 44 06 00 00 00 	mov    DWORD PTR [edx+0x644],0x43cc0000
  484547:	00 cc 43 
  48454a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48454f:	ba 00 24 47 00       	mov    edx,0x472400
  484554:	c7 80 4c 06 00 00 00 	mov    DWORD PTR [eax+0x64c],0x44bb8000
  48455b:	80 bb 44 
  48455e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484564:	81 c1 54 06 00 00    	add    ecx,0x654
  48456a:	ff d6                	call   esi
  48456c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484572:	66 c7 82 58 06 00 00 	mov    WORD PTR [edx+0x658],0xe
  484579:	0e 00 
  48457b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484580:	ba 8c 14 47 00       	mov    edx,0x47148c
  484585:	8d 88 5c 06 00 00    	lea    ecx,[eax+0x65c]
  48458b:	ff d6                	call   esi
  48458d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484593:	ba 1c 24 47 00       	mov    edx,0x47241c
  484598:	81 c1 60 06 00 00    	add    ecx,0x660
  48459e:	ff d6                	call   esi
  4845a0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4845a6:	89 aa 8c 06 00 00    	mov    DWORD PTR [edx+0x68c],ebp
  4845ac:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4845b1:	c7 80 90 06 00 00 00 	mov    DWORD PTR [eax+0x690],0x42600000
  4845b8:	00 60 42 
  4845bb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4845c1:	c7 81 94 06 00 00 00 	mov    DWORD PTR [ecx+0x694],0x42000000
  4845c8:	00 00 42 
  4845cb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4845d1:	c7 82 98 06 00 00 00 	mov    DWORD PTR [edx+0x698],0x41800000
  4845d8:	00 80 41 
  4845db:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4845e0:	c7 80 9c 06 00 00 00 	mov    DWORD PTR [eax+0x69c],0x42400000
  4845e7:	00 40 42 
  4845ea:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4845f0:	b8 00 00 b0 43       	mov    eax,0x43b00000
  4845f5:	c7 81 a0 06 00 00 00 	mov    DWORD PTR [ecx+0x6a0],0x41c00000
  4845fc:	00 c0 41 
  4845ff:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484605:	89 82 a4 06 00 00    	mov    DWORD PTR [edx+0x6a4],eax
  48460b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484611:	c7 81 a8 06 00 00 00 	mov    DWORD PTR [ecx+0x6a8],0x43a80000
  484618:	00 a8 43 
  48461b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484621:	c7 82 ac 06 00 00 00 	mov    DWORD PTR [edx+0x6ac],0x43a40000
  484628:	00 a4 43 
  48462b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484631:	89 81 b0 06 00 00    	mov    DWORD PTR [ecx+0x6b0],eax
  484637:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48463d:	c7 82 b4 06 00 00 00 	mov    DWORD PTR [edx+0x6b4],0x43b80000
  484644:	00 b8 43 
  484647:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48464c:	ba 84 14 47 00       	mov    edx,0x471484
  484651:	c7 80 b8 06 00 00 00 	mov    DWORD PTR [eax+0x6b8],0x43bc0000
  484658:	00 bc 43 
  48465b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484661:	66 c7 81 cc 06 00 00 	mov    WORD PTR [ecx+0x6cc],0xf
  484668:	0f 00 
  48466a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48466f:	8d 88 d0 06 00 00    	lea    ecx,[eax+0x6d0]
  484675:	ff d6                	call   esi
  484677:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48467d:	ba 34 24 47 00       	mov    edx,0x472434
  484682:	81 c1 d4 06 00 00    	add    ecx,0x6d4
  484688:	ff d6                	call   esi
  48468a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484690:	bd 00 00 b0 42       	mov    ebp,0x42b00000
  484695:	c7 82 00 07 00 00 00 	mov    DWORD PTR [edx+0x700],0x42e00000
  48469c:	00 e0 42 
  48469f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4846a4:	89 a8 04 07 00 00    	mov    DWORD PTR [eax+0x704],ebp
  4846aa:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4846b0:	c7 81 08 07 00 00 00 	mov    DWORD PTR [ecx+0x708],0x42800000
  4846b7:	00 80 42 
  4846ba:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4846c0:	c7 82 0c 07 00 00 00 	mov    DWORD PTR [edx+0x70c],0x42200000
  4846c7:	00 20 42 
  4846ca:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4846cf:	c7 80 10 07 00 00 00 	mov    DWORD PTR [eax+0x710],0x42a00000
  4846d6:	00 a0 42 
  4846d9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4846df:	c7 81 14 07 00 00 00 	mov    DWORD PTR [ecx+0x714],0x42400000
  4846e6:	00 40 42 
  4846e9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4846ef:	c7 82 18 07 00 00 00 	mov    DWORD PTR [edx+0x718],0x439c0000
  4846f6:	00 9c 43 
  4846f9:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4846fe:	c7 80 1c 07 00 00 00 	mov    DWORD PTR [eax+0x71c],0x43940000
  484705:	00 94 43 
  484708:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48470e:	c7 81 20 07 00 00 00 	mov    DWORD PTR [ecx+0x720],0x43900000
  484715:	00 90 43 
  484718:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48471e:	c7 82 24 07 00 00 00 	mov    DWORD PTR [edx+0x724],0x438c0000
  484725:	00 8c 43 
  484728:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48472d:	c7 80 28 07 00 00 00 	mov    DWORD PTR [eax+0x728],0x43a00000
  484734:	00 a0 43 
  484737:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48473d:	c7 81 2c 07 00 00 00 	mov    DWORD PTR [ecx+0x72c],0x43980000
  484744:	00 98 43 
  484747:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48474d:	66 c7 82 40 07 00 00 	mov    WORD PTR [edx+0x740],0x10
  484754:	10 00 
  484756:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48475b:	ba b8 13 47 00       	mov    edx,0x4713b8
  484760:	8d 88 44 07 00 00    	lea    ecx,[eax+0x744]
  484766:	ff d6                	call   esi
  484768:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48476e:	ba 48 24 47 00       	mov    edx,0x472448
  484773:	81 c1 48 07 00 00    	add    ecx,0x748
  484779:	ff d6                	call   esi
  48477b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484781:	c7 82 50 07 00 00 00 	mov    DWORD PTR [edx+0x750],0x456d8000
  484788:	80 6d 45 
  48478b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484790:	c7 80 74 07 00 00 00 	mov    DWORD PTR [eax+0x774],0x43080000
  484797:	00 08 43 
  48479a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4847a0:	b8 00 00 e0 42       	mov    eax,0x42e00000
  4847a5:	89 81 78 07 00 00    	mov    DWORD PTR [ecx+0x778],eax
  4847ab:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4847b1:	89 aa 7c 07 00 00    	mov    DWORD PTR [edx+0x77c],ebp
  4847b7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4847bd:	c7 81 80 07 00 00 00 	mov    DWORD PTR [ecx+0x780],0x42800000
  4847c4:	00 80 42 
  4847c7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4847cd:	89 82 84 07 00 00    	mov    DWORD PTR [edx+0x784],eax
  4847d3:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4847d8:	89 a8 88 07 00 00    	mov    DWORD PTR [eax+0x788],ebp
  4847de:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4847e4:	b8 00 00 8c 43       	mov    eax,0x438c0000
  4847e9:	89 81 8c 07 00 00    	mov    DWORD PTR [ecx+0x78c],eax
  4847ef:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4847f5:	c7 82 90 07 00 00 00 	mov    DWORD PTR [edx+0x790],0x43800000
  4847fc:	00 80 43 
  4847ff:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484805:	c7 81 94 07 00 00 00 	mov    DWORD PTR [ecx+0x794],0x43780000
  48480c:	00 78 43 
  48480f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484815:	c7 82 98 07 00 00 00 	mov    DWORD PTR [edx+0x798],0x43700000
  48481c:	00 70 43 
  48481f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484825:	89 81 9c 07 00 00    	mov    DWORD PTR [ecx+0x79c],eax
  48482b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484831:	c7 82 a0 07 00 00 00 	mov    DWORD PTR [edx+0x7a0],0x43880000
  484838:	00 88 43 
  48483b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484840:	ba a8 13 47 00       	mov    edx,0x4713a8
  484845:	c7 80 a8 07 00 00 00 	mov    DWORD PTR [eax+0x7a8],0x44ed8000
  48484c:	80 ed 44 
  48484f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484855:	66 c7 81 b4 07 00 00 	mov    WORD PTR [ecx+0x7b4],0x11
  48485c:	11 00 
  48485e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484863:	8d 88 b8 07 00 00    	lea    ecx,[eax+0x7b8]
  484869:	ff d6                	call   esi
  48486b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484871:	ba 5c 24 47 00       	mov    edx,0x47245c
  484876:	81 c1 bc 07 00 00    	add    ecx,0x7bc
  48487c:	ff d6                	call   esi
  48487e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484883:	ba b0 21 47 00       	mov    edx,0x4721b0
  484888:	8d 88 c0 07 00 00    	lea    ecx,[eax+0x7c0]
  48488e:	ff d6                	call   esi
  484890:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484896:	c7 81 c4 07 00 00 00 	mov    DWORD PTR [ecx+0x7c4],0x45548000
  48489d:	80 54 45 
  4848a0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4848a6:	c7 82 c8 07 00 00 00 	mov    DWORD PTR [edx+0x7c8],0x437a0000
  4848ad:	00 7a 43 
  4848b0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4848b5:	c7 80 cc 07 00 00 00 	mov    DWORD PTR [eax+0x7cc],0x44a8c000
  4848bc:	c0 a8 44 
  4848bf:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4848c5:	c7 81 d0 07 00 00 00 	mov    DWORD PTR [ecx+0x7d0],0x456d8000
  4848cc:	80 6d 45 
  4848cf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4848d5:	c7 82 d4 07 00 00 00 	mov    DWORD PTR [edx+0x7d4],0x451c4000
  4848dc:	40 1c 45 
  4848df:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4848e4:	c7 80 d8 07 00 00 00 	mov    DWORD PTR [eax+0x7d8],0x465de000
  4848eb:	e0 5d 46 
  4848ee:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4848f4:	c7 81 dc 07 00 00 00 	mov    DWORD PTR [ecx+0x7dc],0x468ca000
  4848fb:	a0 8c 46 
  4848fe:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484904:	89 ba e0 07 00 00    	mov    DWORD PTR [edx+0x7e0],edi
  48490a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48490f:	89 b8 e4 07 00 00    	mov    DWORD PTR [eax+0x7e4],edi
  484915:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48491b:	c7 81 e8 07 00 00 00 	mov    DWORD PTR [ecx+0x7e8],0x43200000
  484922:	00 20 43 
  484925:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48492b:	c7 82 ec 07 00 00 00 	mov    DWORD PTR [edx+0x7ec],0x43080000
  484932:	00 08 43 
  484935:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48493a:	c7 80 f0 07 00 00 00 	mov    DWORD PTR [eax+0x7f0],0x42e00000
  484941:	00 e0 42 
  484944:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48494a:	89 a9 f4 07 00 00    	mov    DWORD PTR [ecx+0x7f4],ebp
  484950:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484956:	c7 82 f8 07 00 00 00 	mov    DWORD PTR [edx+0x7f8],0x43000000
  48495d:	00 00 43 
  484960:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484965:	c7 80 fc 07 00 00 00 	mov    DWORD PTR [eax+0x7fc],0x42d00000
  48496c:	00 d0 42 
  48496f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484975:	b8 00 00 70 43       	mov    eax,0x43700000
  48497a:	89 81 00 08 00 00    	mov    DWORD PTR [ecx+0x800],eax
  484980:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484986:	b9 00 00 48 43       	mov    ecx,0x43480000
  48498b:	c7 82 04 08 00 00 00 	mov    DWORD PTR [edx+0x804],0x43580000
  484992:	00 58 43 
  484995:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48499b:	89 8a 08 08 00 00    	mov    DWORD PTR [edx+0x808],ecx
  4849a1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4849a7:	89 8a 0c 08 00 00    	mov    DWORD PTR [edx+0x80c],ecx
  4849ad:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4849b3:	89 81 10 08 00 00    	mov    DWORD PTR [ecx+0x810],eax
  4849b9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4849bf:	c7 82 14 08 00 00 00 	mov    DWORD PTR [edx+0x814],0x43600000
  4849c6:	00 60 43 
  4849c9:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4849ce:	ba 7c 24 47 00       	mov    edx,0x47247c
  4849d3:	c7 80 1c 08 00 00 00 	mov    DWORD PTR [eax+0x81c],0x44d48000
  4849da:	80 d4 44 
  4849dd:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4849e3:	81 c1 24 08 00 00    	add    ecx,0x824
  4849e9:	ff d6                	call   esi
  4849eb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4849f1:	66 c7 82 28 08 00 00 	mov    WORD PTR [edx+0x828],0x12
  4849f8:	12 00 
  4849fa:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4849ff:	ba b0 13 47 00       	mov    edx,0x4713b0
  484a04:	8d 88 2c 08 00 00    	lea    ecx,[eax+0x82c]
  484a0a:	ff d6                	call   esi
  484a0c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484a12:	ba 8c 24 47 00       	mov    edx,0x47248c
  484a17:	81 c1 30 08 00 00    	add    ecx,0x830
  484a1d:	ff d6                	call   esi
  484a1f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484a25:	c7 82 38 08 00 00 00 	mov    DWORD PTR [edx+0x838],0x45610000
  484a2c:	00 61 45 
  484a2f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484a34:	c7 80 40 08 00 00 00 	mov    DWORD PTR [eax+0x840],0x43fa0000
  484a3b:	00 fa 43 
  484a3e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484a44:	89 b9 44 08 00 00    	mov    DWORD PTR [ecx+0x844],edi
  484a4a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484a50:	c7 82 48 08 00 00 00 	mov    DWORD PTR [edx+0x848],0x44fa0000
  484a57:	00 fa 44 
  484a5a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484a5f:	c7 80 4c 08 00 00 00 	mov    DWORD PTR [eax+0x84c],0x457a0000
  484a66:	00 7a 45 
  484a69:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484a6f:	b8 00 00 28 43       	mov    eax,0x43280000
  484a74:	89 81 5c 08 00 00    	mov    DWORD PTR [ecx+0x85c],eax
  484a7a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484a80:	b9 00 00 08 43       	mov    ecx,0x43080000
  484a85:	c7 82 60 08 00 00 00 	mov    DWORD PTR [edx+0x860],0x43200000
  484a8c:	00 20 43 
  484a8f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484a95:	89 8a 64 08 00 00    	mov    DWORD PTR [edx+0x864],ecx
  484a9b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484aa1:	c7 82 68 08 00 00 00 	mov    DWORD PTR [edx+0x868],0x42e00000
  484aa8:	00 e0 42 
  484aab:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484ab1:	89 8a 6c 08 00 00    	mov    DWORD PTR [edx+0x86c],ecx
  484ab7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484abd:	c7 81 70 08 00 00 00 	mov    DWORD PTR [ecx+0x870],0x42e00000
  484ac4:	00 e0 42 
  484ac7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484acd:	c7 82 74 08 00 00 00 	mov    DWORD PTR [edx+0x874],0x43500000
  484ad4:	00 50 43 
  484ad7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484add:	c7 81 78 08 00 00 00 	mov    DWORD PTR [ecx+0x878],0x43380000
  484ae4:	00 38 43 
  484ae7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484aed:	89 82 7c 08 00 00    	mov    DWORD PTR [edx+0x87c],eax
  484af3:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484af8:	c7 80 80 08 00 00 00 	mov    DWORD PTR [eax+0x880],0x43180000
  484aff:	00 18 43 
  484b02:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484b08:	c7 81 84 08 00 00 00 	mov    DWORD PTR [ecx+0x884],0x43400000
  484b0f:	00 40 43 
  484b12:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484b18:	c7 82 88 08 00 00 00 	mov    DWORD PTR [edx+0x888],0x43300000
  484b1f:	00 30 43 
  484b22:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484b27:	ba a8 13 47 00       	mov    edx,0x4713a8
  484b2c:	c7 80 90 08 00 00 00 	mov    DWORD PTR [eax+0x890],0x44e10000
  484b33:	00 e1 44 
  484b36:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484b3c:	66 c7 81 9c 08 00 00 	mov    WORD PTR [ecx+0x89c],0x13
  484b43:	13 00 
  484b45:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484b4a:	8d 88 a0 08 00 00    	lea    ecx,[eax+0x8a0]
  484b50:	ff d6                	call   esi
  484b52:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484b58:	ba 5c 24 47 00       	mov    edx,0x47245c
  484b5d:	81 c1 a4 08 00 00    	add    ecx,0x8a4
  484b63:	ff d6                	call   esi
  484b65:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484b6a:	ba 68 22 47 00       	mov    edx,0x472268
  484b6f:	8d 88 a8 08 00 00    	lea    ecx,[eax+0x8a8]
  484b75:	ff d6                	call   esi
  484b77:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484b7d:	c7 81 ac 08 00 00 00 	mov    DWORD PTR [ecx+0x8ac],0x45548000
  484b84:	80 54 45 
  484b87:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484b8d:	c7 82 b0 08 00 00 00 	mov    DWORD PTR [edx+0x8b0],0x437a0000
  484b94:	00 7a 43 
  484b97:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484b9c:	c7 80 b4 08 00 00 00 	mov    DWORD PTR [eax+0x8b4],0x44a8c000
  484ba3:	c0 a8 44 
  484ba6:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484bac:	c7 81 b8 08 00 00 00 	mov    DWORD PTR [ecx+0x8b8],0x456d8000
  484bb3:	80 6d 45 
  484bb6:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484bbc:	c7 82 bc 08 00 00 00 	mov    DWORD PTR [edx+0x8bc],0x46241000
  484bc3:	10 24 46 
  484bc6:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484bcb:	c7 80 c0 08 00 00 00 	mov    DWORD PTR [eax+0x8c0],0x465de000
  484bd2:	e0 5d 46 
  484bd5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484bdb:	c7 81 c4 08 00 00 00 	mov    DWORD PTR [ecx+0x8c4],0x468ca000
  484be2:	a0 8c 46 
  484be5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484beb:	89 ba c8 08 00 00    	mov    DWORD PTR [edx+0x8c8],edi
  484bf1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484bf6:	89 b8 cc 08 00 00    	mov    DWORD PTR [eax+0x8cc],edi
  484bfc:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484c02:	c7 81 d0 08 00 00 00 	mov    DWORD PTR [ecx+0x8d0],0x43400000
  484c09:	00 40 43 
  484c0c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484c12:	b9 00 00 20 43       	mov    ecx,0x43200000
  484c17:	c7 82 d4 08 00 00 00 	mov    DWORD PTR [edx+0x8d4],0x43380000
  484c1e:	00 38 43 
  484c21:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484c26:	89 88 d8 08 00 00    	mov    DWORD PTR [eax+0x8d8],ecx
  484c2c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484c32:	b8 00 00 08 43       	mov    eax,0x43080000
  484c37:	89 82 dc 08 00 00    	mov    DWORD PTR [edx+0x8dc],eax
  484c3d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484c43:	89 8a e0 08 00 00    	mov    DWORD PTR [edx+0x8e0],ecx
  484c49:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484c4f:	89 81 e4 08 00 00    	mov    DWORD PTR [ecx+0x8e4],eax
  484c55:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484c5b:	c7 82 e8 08 00 00 00 	mov    DWORD PTR [edx+0x8e8],0x43280000
  484c62:	00 28 43 
  484c65:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484c6b:	c7 81 ec 08 00 00 00 	mov    DWORD PTR [ecx+0x8ec],0x43100000
  484c72:	00 10 43 
  484c75:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484c7b:	c7 82 f0 08 00 00 00 	mov    DWORD PTR [edx+0x8f0],0x43000000
  484c82:	00 00 43 
  484c85:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484c8b:	c7 81 f4 08 00 00 00 	mov    DWORD PTR [ecx+0x8f4],0x42e00000
  484c92:	00 e0 42 
  484c95:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484c9b:	c7 82 f8 08 00 00 00 	mov    DWORD PTR [edx+0x8f8],0x43180000
  484ca2:	00 18 43 
  484ca5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484cab:	89 81 fc 08 00 00    	mov    DWORD PTR [ecx+0x8fc],eax
  484cb1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484cb7:	c7 82 04 09 00 00 00 	mov    DWORD PTR [edx+0x904],0x44d48000
  484cbe:	80 d4 44 
  484cc1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484cc6:	ba d0 24 47 00       	mov    edx,0x4724d0
  484ccb:	8d 88 0c 09 00 00    	lea    ecx,[eax+0x90c]
  484cd1:	ff d6                	call   esi
  484cd3:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484cd9:	ba a8 13 47 00       	mov    edx,0x4713a8
  484cde:	66 c7 81 10 09 00 00 	mov    WORD PTR [ecx+0x910],0x14
  484ce5:	14 00 
  484ce7:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484cec:	8d 88 14 09 00 00    	lea    ecx,[eax+0x914]
  484cf2:	ff d6                	call   esi
  484cf4:	ba 5c 24 47 00       	mov    edx,0x47245c
  484cf9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484cff:	81 c1 18 09 00 00    	add    ecx,0x918
  484d05:	ff d6                	call   esi
  484d07:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484d0c:	ba 90 22 47 00       	mov    edx,0x472290
  484d11:	8d 88 1c 09 00 00    	lea    ecx,[eax+0x91c]
  484d17:	ff d6                	call   esi
  484d19:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484d1f:	c7 81 20 09 00 00 00 	mov    DWORD PTR [ecx+0x920],0x456d8000
  484d26:	80 6d 45 
  484d29:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484d2f:	c7 82 24 09 00 00 00 	mov    DWORD PTR [edx+0x924],0x43960000
  484d36:	00 96 43 
  484d39:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484d3e:	c7 80 28 09 00 00 00 	mov    DWORD PTR [eax+0x928],0x44bb8000
  484d45:	80 bb 44 
  484d48:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484d4e:	c7 81 2c 09 00 00 00 	mov    DWORD PTR [ecx+0x92c],0x45834000
  484d55:	40 83 45 
  484d58:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484d5e:	c7 82 30 09 00 00 00 	mov    DWORD PTR [edx+0x930],0x4633b000
  484d65:	b0 33 46 
  484d68:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484d6d:	c7 80 34 09 00 00 00 	mov    DWORD PTR [eax+0x934],0x466a6000
  484d74:	60 6a 46 
  484d77:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484d7d:	c7 81 38 09 00 00 00 	mov    DWORD PTR [ecx+0x938],0x46947000
  484d84:	70 94 46 
  484d87:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484d8d:	89 ba 3c 09 00 00    	mov    DWORD PTR [edx+0x93c],edi
  484d93:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484d98:	89 b8 40 09 00 00    	mov    DWORD PTR [eax+0x940],edi
  484d9e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484da4:	b8 00 00 50 43       	mov    eax,0x43500000
  484da9:	89 81 44 09 00 00    	mov    DWORD PTR [ecx+0x944],eax
  484daf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484db5:	89 82 48 09 00 00    	mov    DWORD PTR [edx+0x948],eax
  484dbb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484dc1:	b8 00 00 38 43       	mov    eax,0x43380000
  484dc6:	89 81 4c 09 00 00    	mov    DWORD PTR [ecx+0x94c],eax
  484dcc:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484dd2:	b9 00 00 20 43       	mov    ecx,0x43200000
  484dd7:	89 8a 50 09 00 00    	mov    DWORD PTR [edx+0x950],ecx
  484ddd:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484de3:	89 82 54 09 00 00    	mov    DWORD PTR [edx+0x954],eax
  484de9:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484dee:	89 88 58 09 00 00    	mov    DWORD PTR [eax+0x958],ecx
  484df4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484dfa:	c7 81 5c 09 00 00 00 	mov    DWORD PTR [ecx+0x95c],0x43000000
  484e01:	00 00 43 
  484e04:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484e0a:	c7 82 60 09 00 00 00 	mov    DWORD PTR [edx+0x960],0x42d00000
  484e11:	00 d0 42 
  484e14:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484e19:	89 a8 64 09 00 00    	mov    DWORD PTR [eax+0x964],ebp
  484e1f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484e25:	c7 81 68 09 00 00 00 	mov    DWORD PTR [ecx+0x968],0x42900000
  484e2c:	00 90 42 
  484e2f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484e35:	c7 82 6c 09 00 00 00 	mov    DWORD PTR [edx+0x96c],0x42e00000
  484e3c:	00 e0 42 
  484e3f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484e44:	ba e0 24 47 00       	mov    edx,0x4724e0
  484e49:	c7 80 70 09 00 00 00 	mov    DWORD PTR [eax+0x970],0x42be0000
  484e50:	00 be 42 
  484e53:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484e59:	c7 81 78 09 00 00 00 	mov    DWORD PTR [ecx+0x978],0x44ed8000
  484e60:	80 ed 44 
  484e63:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484e68:	8d 88 80 09 00 00    	lea    ecx,[eax+0x980]
  484e6e:	ff d6                	call   esi
  484e70:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484e76:	ba 8c 14 47 00       	mov    edx,0x47148c
  484e7b:	66 c7 81 84 09 00 00 	mov    WORD PTR [ecx+0x984],0x15
  484e82:	15 00 
  484e84:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484e89:	8d 88 88 09 00 00    	lea    ecx,[eax+0x988]
  484e8f:	ff d6                	call   esi
  484e91:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484e97:	ba f0 24 47 00       	mov    edx,0x4724f0
  484e9c:	81 c1 8c 09 00 00    	add    ecx,0x98c
  484ea2:	ff d6                	call   esi
  484ea4:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484eaa:	b8 00 00 68 43       	mov    eax,0x43680000
  484eaf:	c7 82 b8 09 00 00 00 	mov    DWORD PTR [edx+0x9b8],0x43600000
  484eb6:	00 60 43 
  484eb9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484ebf:	89 81 bc 09 00 00    	mov    DWORD PTR [ecx+0x9bc],eax
  484ec5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484ecb:	89 82 c0 09 00 00    	mov    DWORD PTR [edx+0x9c0],eax
  484ed1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484ed6:	c7 80 c4 09 00 00 00 	mov    DWORD PTR [eax+0x9c4],0x43500000
  484edd:	00 50 43 
  484ee0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484ee6:	c7 81 c8 09 00 00 00 	mov    DWORD PTR [ecx+0x9c8],0x43480000
  484eed:	00 48 43 
  484ef0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484ef6:	c7 82 cc 09 00 00 00 	mov    DWORD PTR [edx+0x9cc],0x43380000
  484efd:	00 38 43 
  484f00:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484f05:	c7 80 d0 09 00 00 00 	mov    DWORD PTR [eax+0x9d0],0x42900000
  484f0c:	00 90 42 
  484f0f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484f15:	c7 81 d4 09 00 00 00 	mov    DWORD PTR [ecx+0x9d4],0x42400000
  484f1c:	00 40 42 
  484f1f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484f25:	c7 82 d8 09 00 00 00 	mov    DWORD PTR [edx+0x9d8],0x41c00000
  484f2c:	00 c0 41 
  484f2f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484f34:	c7 80 dc 09 00 00 00 	mov    DWORD PTR [eax+0x9dc],0x41800000
  484f3b:	00 80 41 
  484f3e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484f44:	c7 81 e0 09 00 00 00 	mov    DWORD PTR [ecx+0x9e0],0x42800000
  484f4b:	00 80 42 
  484f4e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484f54:	c7 82 e4 09 00 00 00 	mov    DWORD PTR [edx+0x9e4],0x42200000
  484f5b:	00 20 42 
  484f5e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484f63:	ba b0 13 47 00       	mov    edx,0x4713b0
  484f68:	66 c7 80 f8 09 00 00 	mov    WORD PTR [eax+0x9f8],0x16
  484f6f:	16 00 
  484f71:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484f77:	81 c1 fc 09 00 00    	add    ecx,0x9fc
  484f7d:	ff d6                	call   esi
  484f7f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484f84:	ba 08 25 47 00       	mov    edx,0x472508
  484f89:	8d 88 00 0a 00 00    	lea    ecx,[eax+0xa00]
  484f8f:	ff d6                	call   esi
  484f91:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484f97:	c7 81 08 0a 00 00 00 	mov    DWORD PTR [ecx+0xa08],0x45610000
  484f9e:	00 61 45 
  484fa1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484fa7:	c7 82 10 0a 00 00 00 	mov    DWORD PTR [edx+0xa10],0x43fa0000
  484fae:	00 fa 43 
  484fb1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  484fb6:	89 b8 14 0a 00 00    	mov    DWORD PTR [eax+0xa14],edi
  484fbc:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484fc2:	b8 00 00 8c 43       	mov    eax,0x438c0000
  484fc7:	c7 81 18 0a 00 00 00 	mov    DWORD PTR [ecx+0xa18],0x44fa0000
  484fce:	00 fa 44 
  484fd1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484fd7:	c7 82 1c 0a 00 00 00 	mov    DWORD PTR [edx+0xa1c],0x457a0000
  484fde:	00 7a 45 
  484fe1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484fe7:	89 81 2c 0a 00 00    	mov    DWORD PTR [ecx+0xa2c],eax
  484fed:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  484ff3:	89 82 30 0a 00 00    	mov    DWORD PTR [edx+0xa30],eax
  484ff9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  484fff:	89 81 34 0a 00 00    	mov    DWORD PTR [ecx+0xa34],eax
  485005:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48500b:	89 82 38 0a 00 00    	mov    DWORD PTR [edx+0xa38],eax
  485011:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485017:	b8 00 00 80 43       	mov    eax,0x43800000
  48501c:	89 81 3c 0a 00 00    	mov    DWORD PTR [ecx+0xa3c],eax
  485022:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485028:	89 82 40 0a 00 00    	mov    DWORD PTR [edx+0xa40],eax
  48502e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485033:	89 a8 44 0a 00 00    	mov    DWORD PTR [eax+0xa44],ebp
  485039:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48503f:	c7 81 48 0a 00 00 00 	mov    DWORD PTR [ecx+0xa48],0x42800000
  485046:	00 80 42 
  485049:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48504f:	c7 82 4c 0a 00 00 00 	mov    DWORD PTR [edx+0xa4c],0x42200000
  485056:	00 20 42 
  485059:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48505e:	c7 80 50 0a 00 00 00 	mov    DWORD PTR [eax+0xa50],0x41800000
  485065:	00 80 41 
  485068:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48506e:	c7 81 54 0a 00 00 00 	mov    DWORD PTR [ecx+0xa54],0x42600000
  485075:	00 60 42 
  485078:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48507e:	c7 82 58 0a 00 00 00 	mov    DWORD PTR [edx+0xa58],0x42000000
  485085:	00 00 42 
  485088:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48508d:	ba a8 13 47 00       	mov    edx,0x4713a8
  485092:	c7 80 60 0a 00 00 00 	mov    DWORD PTR [eax+0xa60],0x44e10000
  485099:	00 e1 44 
  48509c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4850a2:	66 c7 81 6c 0a 00 00 	mov    WORD PTR [ecx+0xa6c],0x17
  4850a9:	17 00 
  4850ab:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4850b0:	8d 88 70 0a 00 00    	lea    ecx,[eax+0xa70]
  4850b6:	ff d6                	call   esi
  4850b8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4850be:	ba 48 25 47 00       	mov    edx,0x472548
  4850c3:	81 c1 74 0a 00 00    	add    ecx,0xa74
  4850c9:	ff d6                	call   esi
  4850cb:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4850d0:	ba b0 21 47 00       	mov    edx,0x4721b0
  4850d5:	8d 88 78 0a 00 00    	lea    ecx,[eax+0xa78]
  4850db:	ff d6                	call   esi
  4850dd:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4850e3:	c7 81 7c 0a 00 00 00 	mov    DWORD PTR [ecx+0xa7c],0x45834000
  4850ea:	40 83 45 
  4850ed:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4850f3:	c7 82 80 0a 00 00 00 	mov    DWORD PTR [edx+0xa80],0x43af0000
  4850fa:	00 af 43 
  4850fd:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485102:	c7 80 84 0a 00 00 00 	mov    DWORD PTR [eax+0xa84],0x44d48000
  485109:	80 d4 44 
  48510c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485112:	c7 81 88 0a 00 00 00 	mov    DWORD PTR [ecx+0xa88],0x45947000
  485119:	70 94 45 
  48511c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485122:	c7 82 8c 0a 00 00 00 	mov    DWORD PTR [edx+0xa8c],0x464b2000
  485129:	20 4b 46 
  48512c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485131:	c7 80 90 0a 00 00 00 	mov    DWORD PTR [eax+0xa90],0x467a0000
  485138:	00 7a 46 
  48513b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485141:	c7 81 94 0a 00 00 00 	mov    DWORD PTR [ecx+0xa94],0x469c4000
  485148:	40 9c 46 
  48514b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485151:	89 ba 98 0a 00 00    	mov    DWORD PTR [edx+0xa98],edi
  485157:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48515c:	89 b8 9c 0a 00 00    	mov    DWORD PTR [eax+0xa9c],edi
  485162:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485168:	b8 00 00 a0 43       	mov    eax,0x43a00000
  48516d:	89 81 a0 0a 00 00    	mov    DWORD PTR [ecx+0xaa0],eax
  485173:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485179:	89 82 a4 0a 00 00    	mov    DWORD PTR [edx+0xaa4],eax
  48517f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485185:	89 81 a8 0a 00 00    	mov    DWORD PTR [ecx+0xaa8],eax
  48518b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485191:	89 82 ac 0a 00 00    	mov    DWORD PTR [edx+0xaac],eax
  485197:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48519d:	b8 00 00 98 43       	mov    eax,0x43980000
  4851a2:	89 81 b0 0a 00 00    	mov    DWORD PTR [ecx+0xab0],eax
  4851a8:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4851ae:	89 82 b4 0a 00 00    	mov    DWORD PTR [edx+0xab4],eax
  4851b4:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4851b9:	89 a8 b8 0a 00 00    	mov    DWORD PTR [eax+0xab8],ebp
  4851bf:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4851c5:	c7 81 bc 0a 00 00 00 	mov    DWORD PTR [ecx+0xabc],0x42800000
  4851cc:	00 80 42 
  4851cf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4851d5:	c7 82 c0 0a 00 00 00 	mov    DWORD PTR [edx+0xac0],0x42200000
  4851dc:	00 20 42 
  4851df:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4851e4:	c7 80 c4 0a 00 00 00 	mov    DWORD PTR [eax+0xac4],0x41800000
  4851eb:	00 80 41 
  4851ee:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4851f4:	c7 81 c8 0a 00 00 00 	mov    DWORD PTR [ecx+0xac8],0x42900000
  4851fb:	00 90 42 
  4851fe:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485204:	c7 82 cc 0a 00 00 00 	mov    DWORD PTR [edx+0xacc],0x42000000
  48520b:	00 00 42 
  48520e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485213:	ba 6c 25 47 00       	mov    edx,0x47256c
  485218:	c7 80 d4 0a 00 00 00 	mov    DWORD PTR [eax+0xad4],0x45034000
  48521f:	40 03 45 
  485222:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485228:	81 c1 dc 0a 00 00    	add    ecx,0xadc
  48522e:	ff d6                	call   esi
  485230:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485236:	66 c7 82 e0 0a 00 00 	mov    WORD PTR [edx+0xae0],0x18
  48523d:	18 00 
  48523f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485244:	ba a8 13 47 00       	mov    edx,0x4713a8
  485249:	8d 88 e4 0a 00 00    	lea    ecx,[eax+0xae4]
  48524f:	ff d6                	call   esi
  485251:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485257:	ba 48 25 47 00       	mov    edx,0x472548
  48525c:	81 c1 e8 0a 00 00    	add    ecx,0xae8
  485262:	ff d6                	call   esi
  485264:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485269:	ba 68 22 47 00       	mov    edx,0x472268
  48526e:	8d 88 ec 0a 00 00    	lea    ecx,[eax+0xaec]
  485274:	ff d6                	call   esi
  485276:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48527c:	c7 81 f0 0a 00 00 00 	mov    DWORD PTR [ecx+0xaf0],0x45834000
  485283:	40 83 45 
  485286:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48528c:	c7 82 f4 0a 00 00 00 	mov    DWORD PTR [edx+0xaf4],0x43af0000
  485293:	00 af 43 
  485296:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48529b:	c7 80 f8 0a 00 00 00 	mov    DWORD PTR [eax+0xaf8],0x44d48000
  4852a2:	80 d4 44 
  4852a5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4852ab:	c7 81 fc 0a 00 00 00 	mov    DWORD PTR [ecx+0xafc],0x45947000
  4852b2:	70 94 45 
  4852b5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4852bb:	c7 82 00 0b 00 00 00 	mov    DWORD PTR [edx+0xb00],0x464b2000
  4852c2:	20 4b 46 
  4852c5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4852ca:	c7 80 04 0b 00 00 00 	mov    DWORD PTR [eax+0xb04],0x467a0000
  4852d1:	00 7a 46 
  4852d4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4852da:	c7 81 08 0b 00 00 00 	mov    DWORD PTR [ecx+0xb08],0x469c4000
  4852e1:	40 9c 46 
  4852e4:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4852ea:	89 ba 0c 0b 00 00    	mov    DWORD PTR [edx+0xb0c],edi
  4852f0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4852f5:	89 b8 10 0b 00 00    	mov    DWORD PTR [eax+0xb10],edi
  4852fb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485301:	b8 00 00 b8 43       	mov    eax,0x43b80000
  485306:	89 81 14 0b 00 00    	mov    DWORD PTR [ecx+0xb14],eax
  48530c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485312:	89 82 18 0b 00 00    	mov    DWORD PTR [edx+0xb18],eax
  485318:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48531e:	89 81 1c 0b 00 00    	mov    DWORD PTR [ecx+0xb1c],eax
  485324:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48532a:	89 82 20 0b 00 00    	mov    DWORD PTR [edx+0xb20],eax
  485330:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485336:	b8 00 00 ac 43       	mov    eax,0x43ac0000
  48533b:	89 81 24 0b 00 00    	mov    DWORD PTR [ecx+0xb24],eax
  485341:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485347:	89 82 28 0b 00 00    	mov    DWORD PTR [edx+0xb28],eax
  48534d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485352:	89 a8 2c 0b 00 00    	mov    DWORD PTR [eax+0xb2c],ebp
  485358:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48535e:	c7 81 30 0b 00 00 00 	mov    DWORD PTR [ecx+0xb30],0x42800000
  485365:	00 80 42 
  485368:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48536e:	c7 82 34 0b 00 00 00 	mov    DWORD PTR [edx+0xb34],0x42200000
  485375:	00 20 42 
  485378:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48537d:	c7 80 38 0b 00 00 00 	mov    DWORD PTR [eax+0xb38],0x41800000
  485384:	00 80 41 
  485387:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48538d:	c7 81 3c 0b 00 00 00 	mov    DWORD PTR [ecx+0xb3c],0x42900000
  485394:	00 90 42 
  485397:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48539d:	c7 82 40 0b 00 00 00 	mov    DWORD PTR [edx+0xb40],0x42000000
  4853a4:	00 00 42 
  4853a7:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4853ac:	ba 7c 25 47 00       	mov    edx,0x47257c
  4853b1:	c7 80 48 0b 00 00 00 	mov    DWORD PTR [eax+0xb48],0x45034000
  4853b8:	40 03 45 
  4853bb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4853c1:	81 c1 50 0b 00 00    	add    ecx,0xb50
  4853c7:	ff d6                	call   esi
  4853c9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4853cf:	66 c7 82 54 0b 00 00 	mov    WORD PTR [edx+0xb54],0x19
  4853d6:	19 00 
  4853d8:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4853dd:	ba 7c 14 47 00       	mov    edx,0x47147c
  4853e2:	8d 88 58 0b 00 00    	lea    ecx,[eax+0xb58]
  4853e8:	ff d6                	call   esi
  4853ea:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4853f0:	ba 9c 23 47 00       	mov    edx,0x47239c
  4853f5:	81 c1 5c 0b 00 00    	add    ecx,0xb5c
  4853fb:	ff d6                	call   esi
  4853fd:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485403:	b8 00 00 cc 43       	mov    eax,0x43cc0000
  485408:	89 82 88 0b 00 00    	mov    DWORD PTR [edx+0xb88],eax
  48540e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485414:	89 81 8c 0b 00 00    	mov    DWORD PTR [ecx+0xb8c],eax
  48541a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485420:	89 82 90 0b 00 00    	mov    DWORD PTR [edx+0xb90],eax
  485426:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48542c:	89 81 94 0b 00 00    	mov    DWORD PTR [ecx+0xb94],eax
  485432:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485438:	b8 00 00 c0 43       	mov    eax,0x43c00000
  48543d:	89 82 98 0b 00 00    	mov    DWORD PTR [edx+0xb98],eax
  485443:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485449:	89 81 9c 0b 00 00    	mov    DWORD PTR [ecx+0xb9c],eax
  48544f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485455:	89 aa a0 0b 00 00    	mov    DWORD PTR [edx+0xba0],ebp
  48545b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485460:	c7 80 a4 0b 00 00 00 	mov    DWORD PTR [eax+0xba4],0x42800000
  485467:	00 80 42 
  48546a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485470:	c7 81 a8 0b 00 00 00 	mov    DWORD PTR [ecx+0xba8],0x42200000
  485477:	00 20 42 
  48547a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485480:	c7 82 ac 0b 00 00 00 	mov    DWORD PTR [edx+0xbac],0x41800000
  485487:	00 80 41 
  48548a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48548f:	c7 80 b0 0b 00 00 00 	mov    DWORD PTR [eax+0xbb0],0x42900000
  485496:	00 90 42 
  485499:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48549f:	c7 81 b4 0b 00 00 00 	mov    DWORD PTR [ecx+0xbb4],0x42000000
  4854a6:	00 00 42 
  4854a9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4854af:	66 c7 82 c8 0b 00 00 	mov    WORD PTR [edx+0xbc8],0x1a
  4854b6:	1a 00 
  4854b8:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4854bd:	ba a8 13 47 00       	mov    edx,0x4713a8
  4854c2:	8d 88 cc 0b 00 00    	lea    ecx,[eax+0xbcc]
  4854c8:	ff d6                	call   esi
  4854ca:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4854d0:	ba 48 25 47 00       	mov    edx,0x472548
  4854d5:	81 c1 d0 0b 00 00    	add    ecx,0xbd0
  4854db:	ff d6                	call   esi
  4854dd:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4854e2:	ba 90 22 47 00       	mov    edx,0x472290
  4854e7:	8d 88 d4 0b 00 00    	lea    ecx,[eax+0xbd4]
  4854ed:	ff d6                	call   esi
  4854ef:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4854f5:	c7 81 d8 0b 00 00 00 	mov    DWORD PTR [ecx+0xbd8],0x458fc000
  4854fc:	c0 8f 45 
  4854ff:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485505:	c7 82 dc 0b 00 00 00 	mov    DWORD PTR [edx+0xbdc],0x43c80000
  48550c:	00 c8 43 
  48550f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485514:	c7 80 e0 0b 00 00 00 	mov    DWORD PTR [eax+0xbe0],0x44fa0000
  48551b:	00 fa 44 
  48551e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485524:	c7 81 e4 0b 00 00 00 	mov    DWORD PTR [ecx+0xbe4],0x45b3b000
  48552b:	b0 b3 45 
  48552e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485534:	c7 82 e8 0b 00 00 00 	mov    DWORD PTR [edx+0xbe8],0x465ac000
  48553b:	c0 5a 46 
  48553e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485543:	c7 80 ec 0b 00 00 00 	mov    DWORD PTR [eax+0xbec],0x4684d000
  48554a:	d0 84 46 
  48554d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485553:	c7 81 f0 0b 00 00 00 	mov    DWORD PTR [ecx+0xbf0],0x46a41000
  48555a:	10 a4 46 
  48555d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485563:	89 ba f4 0b 00 00    	mov    DWORD PTR [edx+0xbf4],edi
  485569:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48556e:	89 b8 f8 0b 00 00    	mov    DWORD PTR [eax+0xbf8],edi
  485574:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48557a:	b8 00 00 e2 43       	mov    eax,0x43e20000
  48557f:	89 81 fc 0b 00 00    	mov    DWORD PTR [ecx+0xbfc],eax
  485585:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48558b:	89 82 00 0c 00 00    	mov    DWORD PTR [edx+0xc00],eax
  485591:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485597:	89 81 04 0c 00 00    	mov    DWORD PTR [ecx+0xc04],eax
  48559d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4855a3:	89 82 08 0c 00 00    	mov    DWORD PTR [edx+0xc08],eax
  4855a9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4855af:	b8 00 00 d6 43       	mov    eax,0x43d60000
  4855b4:	89 81 0c 0c 00 00    	mov    DWORD PTR [ecx+0xc0c],eax
  4855ba:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4855c0:	89 82 10 0c 00 00    	mov    DWORD PTR [edx+0xc10],eax
  4855c6:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4855cb:	89 a8 14 0c 00 00    	mov    DWORD PTR [eax+0xc14],ebp
  4855d1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4855d7:	c7 81 18 0c 00 00 00 	mov    DWORD PTR [ecx+0xc18],0x42800000
  4855de:	00 80 42 
  4855e1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4855e7:	c7 82 1c 0c 00 00 00 	mov    DWORD PTR [edx+0xc1c],0x42200000
  4855ee:	00 20 42 
  4855f1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4855f6:	c7 80 20 0c 00 00 00 	mov    DWORD PTR [eax+0xc20],0x41800000
  4855fd:	00 80 41 
  485600:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485606:	c7 81 24 0c 00 00 00 	mov    DWORD PTR [ecx+0xc24],0x42900000
  48560d:	00 90 42 
  485610:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485616:	c7 82 28 0c 00 00 00 	mov    DWORD PTR [edx+0xc28],0x42000000
  48561d:	00 00 42 
  485620:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485625:	ba 8c 25 47 00       	mov    edx,0x47258c
  48562a:	c7 80 30 0c 00 00 00 	mov    DWORD PTR [eax+0xc30],0x450fc000
  485631:	c0 0f 45 
  485634:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48563a:	81 c1 38 0c 00 00    	add    ecx,0xc38
  485640:	ff d6                	call   esi
  485642:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485648:	66 c7 82 3c 0c 00 00 	mov    WORD PTR [edx+0xc3c],0x1b
  48564f:	1b 00 
  485651:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485656:	ba b0 13 47 00       	mov    edx,0x4713b0
  48565b:	8d 88 40 0c 00 00    	lea    ecx,[eax+0xc40]
  485661:	ff d6                	call   esi
  485663:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485669:	ba 9c 25 47 00       	mov    edx,0x47259c
  48566e:	81 c1 44 0c 00 00    	add    ecx,0xc44
  485674:	ff d6                	call   esi
  485676:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48567c:	c7 82 4c 0c 00 00 00 	mov    DWORD PTR [edx+0xc4c],0x45610000
  485683:	00 61 45 
  485686:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48568b:	c7 80 54 0c 00 00 00 	mov    DWORD PTR [eax+0xc54],0x43fa0000
  485692:	00 fa 43 
  485695:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48569b:	89 b9 58 0c 00 00    	mov    DWORD PTR [ecx+0xc58],edi
  4856a1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4856a7:	c7 82 5c 0c 00 00 00 	mov    DWORD PTR [edx+0xc5c],0x44fa0000
  4856ae:	00 fa 44 
  4856b1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4856b6:	c7 80 60 0c 00 00 00 	mov    DWORD PTR [eax+0xc60],0x457a0000
  4856bd:	00 7a 45 
  4856c0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4856c6:	b8 00 00 f8 43       	mov    eax,0x43f80000
  4856cb:	89 81 70 0c 00 00    	mov    DWORD PTR [ecx+0xc70],eax
  4856d1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4856d7:	89 82 74 0c 00 00    	mov    DWORD PTR [edx+0xc74],eax
  4856dd:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4856e3:	89 81 78 0c 00 00    	mov    DWORD PTR [ecx+0xc78],eax
  4856e9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4856ef:	89 82 7c 0c 00 00    	mov    DWORD PTR [edx+0xc7c],eax
  4856f5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4856fb:	b8 00 00 ee 43       	mov    eax,0x43ee0000
  485700:	89 81 80 0c 00 00    	mov    DWORD PTR [ecx+0xc80],eax
  485706:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48570c:	89 82 84 0c 00 00    	mov    DWORD PTR [edx+0xc84],eax
  485712:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485717:	89 a8 88 0c 00 00    	mov    DWORD PTR [eax+0xc88],ebp
  48571d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485723:	bd 00 00 00 42       	mov    ebp,0x42000000
  485728:	c7 81 8c 0c 00 00 00 	mov    DWORD PTR [ecx+0xc8c],0x42800000
  48572f:	00 80 42 
  485732:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485738:	c7 82 90 0c 00 00 00 	mov    DWORD PTR [edx+0xc90],0x42200000
  48573f:	00 20 42 
  485742:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485747:	c7 80 94 0c 00 00 00 	mov    DWORD PTR [eax+0xc94],0x41800000
  48574e:	00 80 41 
  485751:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485757:	c7 81 98 0c 00 00 00 	mov    DWORD PTR [ecx+0xc98],0x42900000
  48575e:	00 90 42 
  485761:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485767:	89 aa 9c 0c 00 00    	mov    DWORD PTR [edx+0xc9c],ebp
  48576d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485772:	ba 8c 14 47 00       	mov    edx,0x47148c
  485777:	c7 80 a4 0c 00 00 00 	mov    DWORD PTR [eax+0xca4],0x44d48000
  48577e:	80 d4 44 
  485781:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485787:	66 c7 81 b0 0c 00 00 	mov    WORD PTR [ecx+0xcb0],0x1c
  48578e:	1c 00 
  485790:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485795:	8d 88 b4 0c 00 00    	lea    ecx,[eax+0xcb4]
  48579b:	ff d6                	call   esi
  48579d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4857a3:	ba d8 25 47 00       	mov    edx,0x4725d8
  4857a8:	81 c1 b8 0c 00 00    	add    ecx,0xcb8
  4857ae:	ff d6                	call   esi
  4857b0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4857b6:	b8 00 00 03 44       	mov    eax,0x44030000
  4857bb:	89 82 e4 0c 00 00    	mov    DWORD PTR [edx+0xce4],eax
  4857c1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4857c7:	c7 81 e8 0c 00 00 00 	mov    DWORD PTR [ecx+0xce8],0x44090000
  4857ce:	00 09 44 
  4857d1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4857d7:	b9 00 00 0e 44       	mov    ecx,0x440e0000
  4857dc:	89 8a ec 0c 00 00    	mov    DWORD PTR [edx+0xcec],ecx
  4857e2:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4857e8:	89 8a f0 0c 00 00    	mov    DWORD PTR [edx+0xcf0],ecx
  4857ee:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4857f4:	89 81 f4 0c 00 00    	mov    DWORD PTR [ecx+0xcf4],eax
  4857fa:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485800:	c7 82 f8 0c 00 00 00 	mov    DWORD PTR [edx+0xcf8],0x44050000
  485807:	00 05 44 
  48580a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48580f:	c7 80 fc 0c 00 00 00 	mov    DWORD PTR [eax+0xcfc],0x42980000
  485816:	00 98 42 
  485819:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48581f:	c7 81 00 0d 00 00 00 	mov    DWORD PTR [ecx+0xd00],0x42880000
  485826:	00 88 42 
  485829:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48582f:	c7 82 04 0d 00 00 00 	mov    DWORD PTR [edx+0xd04],0x42600000
  485836:	00 60 42 
  485839:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48583e:	89 a8 08 0d 00 00    	mov    DWORD PTR [eax+0xd08],ebp
  485844:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48584a:	c7 81 0c 0d 00 00 00 	mov    DWORD PTR [ecx+0xd0c],0x42400000
  485851:	00 40 42 
  485854:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48585a:	c7 82 10 0d 00 00 00 	mov    DWORD PTR [edx+0xd10],0x41c00000
  485861:	00 c0 41 
  485864:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485869:	ba a8 13 47 00       	mov    edx,0x4713a8
  48586e:	66 c7 80 24 0d 00 00 	mov    WORD PTR [eax+0xd24],0x1d
  485875:	1d 00 
  485877:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48587d:	81 c1 28 0d 00 00    	add    ecx,0xd28
  485883:	ff d6                	call   esi
  485885:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48588a:	ba 08 26 47 00       	mov    edx,0x472608
  48588f:	8d 88 2c 0d 00 00    	lea    ecx,[eax+0xd2c]
  485895:	ff d6                	call   esi
  485897:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48589d:	ba b0 21 47 00       	mov    edx,0x4721b0
  4858a2:	81 c1 30 0d 00 00    	add    ecx,0xd30
  4858a8:	ff d6                	call   esi
  4858aa:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4858b0:	c7 82 34 0d 00 00 00 	mov    DWORD PTR [edx+0xd34],0x459c4000
  4858b7:	40 9c 45 
  4858ba:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4858bf:	c7 80 38 0d 00 00 00 	mov    DWORD PTR [eax+0xd38],0x43c80000
  4858c6:	00 c8 43 
  4858c9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4858cf:	c7 81 3c 0d 00 00 00 	mov    DWORD PTR [ecx+0xd3c],0x45098000
  4858d6:	80 09 45 
  4858d9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4858df:	c7 82 40 0d 00 00 00 	mov    DWORD PTR [edx+0xd40],0x45bb8000
  4858e6:	80 bb 45 
  4858e9:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4858ee:	c7 80 44 0d 00 00 00 	mov    DWORD PTR [eax+0xd44],0x466a6000
  4858f5:	60 6a 46 
  4858f8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4858fe:	c7 81 48 0d 00 00 00 	mov    DWORD PTR [ecx+0xd48],0x468ca000
  485905:	a0 8c 46 
  485908:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48590e:	c7 82 4c 0d 00 00 00 	mov    DWORD PTR [edx+0xd4c],0x46a41000
  485915:	10 a4 46 
  485918:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48591d:	89 b8 50 0d 00 00    	mov    DWORD PTR [eax+0xd50],edi
  485923:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485929:	89 b9 54 0d 00 00    	mov    DWORD PTR [ecx+0xd54],edi
  48592f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485935:	b8 00 00 07 44       	mov    eax,0x44070000
  48593a:	bd 00 00 11 44       	mov    ebp,0x44110000
  48593f:	89 82 58 0d 00 00    	mov    DWORD PTR [edx+0xd58],eax
  485945:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48594b:	c7 81 5c 0d 00 00 00 	mov    DWORD PTR [ecx+0xd5c],0x440c0000
  485952:	00 0c 44 
  485955:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48595b:	89 aa 60 0d 00 00    	mov    DWORD PTR [edx+0xd60],ebp
  485961:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485967:	c7 81 64 0d 00 00 00 	mov    DWORD PTR [ecx+0xd64],0x44170000
  48596e:	00 17 44 
  485971:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485977:	89 82 68 0d 00 00    	mov    DWORD PTR [edx+0xd68],eax
  48597d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485982:	89 a8 6c 0d 00 00    	mov    DWORD PTR [eax+0xd6c],ebp
  485988:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48598e:	b8 00 00 d0 42       	mov    eax,0x42d00000
  485993:	c7 81 70 0d 00 00 00 	mov    DWORD PTR [ecx+0xd70],0x43000000
  48599a:	00 00 43 
  48599d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4859a3:	c7 82 74 0d 00 00 00 	mov    DWORD PTR [edx+0xd74],0x42e80000
  4859aa:	00 e8 42 
  4859ad:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4859b3:	89 81 78 0d 00 00    	mov    DWORD PTR [ecx+0xd78],eax
  4859b9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4859bf:	c7 82 7c 0d 00 00 00 	mov    DWORD PTR [edx+0xd7c],0x42b80000
  4859c6:	00 b8 42 
  4859c9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4859cf:	89 81 80 0d 00 00    	mov    DWORD PTR [ecx+0xd80],eax
  4859d5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4859db:	c7 82 84 0d 00 00 00 	mov    DWORD PTR [edx+0xd84],0x42a80000
  4859e2:	00 a8 42 
  4859e5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4859ea:	ba 28 26 47 00       	mov    edx,0x472628
  4859ef:	c7 80 8c 0d 00 00 00 	mov    DWORD PTR [eax+0xd8c],0x451c4000
  4859f6:	40 1c 45 
  4859f9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4859ff:	81 c1 94 0d 00 00    	add    ecx,0xd94
  485a05:	ff d6                	call   esi
  485a07:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485a0d:	66 c7 82 98 0d 00 00 	mov    WORD PTR [edx+0xd98],0x1e
  485a14:	1e 00 
  485a16:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485a1b:	ba a8 13 47 00       	mov    edx,0x4713a8
  485a20:	8d 88 9c 0d 00 00    	lea    ecx,[eax+0xd9c]
  485a26:	ff d6                	call   esi
  485a28:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485a2e:	ba 08 26 47 00       	mov    edx,0x472608
  485a33:	81 c1 a0 0d 00 00    	add    ecx,0xda0
  485a39:	ff d6                	call   esi
  485a3b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485a40:	ba 90 22 47 00       	mov    edx,0x472290
  485a45:	8d 88 a4 0d 00 00    	lea    ecx,[eax+0xda4]
  485a4b:	ff d6                	call   esi
  485a4d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485a53:	c7 81 a8 0d 00 00 00 	mov    DWORD PTR [ecx+0xda8],0x45a8c000
  485a5a:	c0 a8 45 
  485a5d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485a63:	c7 82 ac 0d 00 00 00 	mov    DWORD PTR [edx+0xdac],0x43e10000
  485a6a:	00 e1 43 
  485a6d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485a72:	c7 80 b0 0d 00 00 00 	mov    DWORD PTR [eax+0xdb0],0x45160000
  485a79:	00 16 45 
  485a7c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485a82:	c7 81 b4 0d 00 00 00 	mov    DWORD PTR [ecx+0xdb4],0x45d48000
  485a89:	80 d4 45 
  485a8c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485a92:	c7 82 b8 0d 00 00 00 	mov    DWORD PTR [edx+0xdb8],0x467a0000
  485a99:	00 7a 46 
  485a9c:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485aa1:	c7 80 bc 0d 00 00 00 	mov    DWORD PTR [eax+0xdbc],0x46985800
  485aa8:	58 98 46 
  485aab:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485ab1:	c7 81 c0 0d 00 00 00 	mov    DWORD PTR [ecx+0xdc0],0x46b3b000
  485ab8:	b0 b3 46 
  485abb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485ac1:	89 ba c4 0d 00 00    	mov    DWORD PTR [edx+0xdc4],edi
  485ac7:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485acc:	89 b8 c8 0d 00 00    	mov    DWORD PTR [eax+0xdc8],edi
  485ad2:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485ad8:	c7 81 cc 0d 00 00 00 	mov    DWORD PTR [ecx+0xdcc],0x440c0000
  485adf:	00 0c 44 
  485ae2:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485ae8:	89 aa d0 0d 00 00    	mov    DWORD PTR [edx+0xdd0],ebp
  485aee:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485af3:	c7 80 d4 0d 00 00 00 	mov    DWORD PTR [eax+0xdd4],0x44160000
  485afa:	00 16 44 
  485afd:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485b03:	c7 81 d8 0d 00 00 00 	mov    DWORD PTR [ecx+0xdd8],0x441b0000
  485b0a:	00 1b 44 
  485b0d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485b13:	c7 82 dc 0d 00 00 00 	mov    DWORD PTR [edx+0xddc],0x440b0000
  485b1a:	00 0b 44 
  485b1d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485b22:	89 a8 e0 0d 00 00    	mov    DWORD PTR [eax+0xde0],ebp
  485b28:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485b2e:	c7 81 e4 0d 00 00 00 	mov    DWORD PTR [ecx+0xde4],0x43280000
  485b35:	00 28 43 
  485b38:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485b3e:	c7 82 e8 0d 00 00 00 	mov    DWORD PTR [edx+0xde8],0x431c0000
  485b45:	00 1c 43 
  485b48:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485b4d:	c7 80 ec 0d 00 00 00 	mov    DWORD PTR [eax+0xdec],0x43100000
  485b54:	00 10 43 
  485b57:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485b5d:	b8 00 00 04 43       	mov    eax,0x43040000
  485b62:	89 81 f0 0d 00 00    	mov    DWORD PTR [ecx+0xdf0],eax
  485b68:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485b6e:	c7 82 f4 0d 00 00 00 	mov    DWORD PTR [edx+0xdf4],0x43140000
  485b75:	00 14 43 
  485b78:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485b7e:	89 81 f8 0d 00 00    	mov    DWORD PTR [ecx+0xdf8],eax
  485b84:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485b8a:	c7 82 00 0e 00 00 00 	mov    DWORD PTR [edx+0xe00],0x4528c000
  485b91:	c0 28 45 
  485b94:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485b99:	ba 34 26 47 00       	mov    edx,0x472634
  485b9e:	8d 88 08 0e 00 00    	lea    ecx,[eax+0xe08]
  485ba4:	ff d6                	call   esi
  485ba6:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485bac:	ba b8 13 47 00       	mov    edx,0x4713b8
  485bb1:	66 c7 81 0c 0e 00 00 	mov    WORD PTR [ecx+0xe0c],0x1f
  485bb8:	1f 00 
  485bba:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485bbf:	8d 88 10 0e 00 00    	lea    ecx,[eax+0xe10]
  485bc5:	ff d6                	call   esi
  485bc7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485bcd:	ba 40 26 47 00       	mov    edx,0x472640
  485bd2:	81 c1 14 0e 00 00    	add    ecx,0xe14
  485bd8:	ff d6                	call   esi
  485bda:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485be0:	b8 00 00 12 44       	mov    eax,0x44120000
  485be5:	bd 00 00 1d 44       	mov    ebp,0x441d0000
  485bea:	c7 82 1c 0e 00 00 00 	mov    DWORD PTR [edx+0xe1c],0x456d8000
  485bf1:	80 6d 45 
  485bf4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485bfa:	89 81 40 0e 00 00    	mov    DWORD PTR [ecx+0xe40],eax
  485c00:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485c06:	c7 82 44 0e 00 00 00 	mov    DWORD PTR [edx+0xe44],0x44170000
  485c0d:	00 17 44 
  485c10:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485c16:	89 a9 48 0e 00 00    	mov    DWORD PTR [ecx+0xe48],ebp
  485c1c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485c22:	c7 82 4c 0e 00 00 00 	mov    DWORD PTR [edx+0xe4c],0x44210000
  485c29:	00 21 44 
  485c2c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485c32:	89 81 50 0e 00 00    	mov    DWORD PTR [ecx+0xe50],eax
  485c38:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485c3e:	c7 82 54 0e 00 00 00 	mov    DWORD PTR [edx+0xe54],0x441b0000
  485c45:	00 1b 44 
  485c48:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485c4d:	c7 80 58 0e 00 00 00 	mov    DWORD PTR [eax+0xe58],0x43540000
  485c54:	00 54 43 
  485c57:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485c5d:	b8 00 00 3c 43       	mov    eax,0x433c0000
  485c62:	c7 81 5c 0e 00 00 00 	mov    DWORD PTR [ecx+0xe5c],0x43480000
  485c69:	00 48 43 
  485c6c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485c72:	89 82 60 0e 00 00    	mov    DWORD PTR [edx+0xe60],eax
  485c78:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485c7e:	c7 81 64 0e 00 00 00 	mov    DWORD PTR [ecx+0xe64],0x432c0000
  485c85:	00 2c 43 
  485c88:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485c8e:	89 82 68 0e 00 00    	mov    DWORD PTR [edx+0xe68],eax
  485c94:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485c99:	c7 80 6c 0e 00 00 00 	mov    DWORD PTR [eax+0xe6c],0x43280000
  485ca0:	00 28 43 
  485ca3:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485ca9:	c7 81 74 0e 00 00 00 	mov    DWORD PTR [ecx+0xe74],0x44ed8000
  485cb0:	80 ed 44 
  485cb3:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485cb9:	66 c7 82 80 0e 00 00 	mov    WORD PTR [edx+0xe80],0x20
  485cc0:	20 00 
  485cc2:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485cc7:	ba a8 13 47 00       	mov    edx,0x4713a8
  485ccc:	8d 88 84 0e 00 00    	lea    ecx,[eax+0xe84]
  485cd2:	ff d6                	call   esi
  485cd4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485cda:	ba 54 26 47 00       	mov    edx,0x472654
  485cdf:	81 c1 88 0e 00 00    	add    ecx,0xe88
  485ce5:	ff d6                	call   esi
  485ce7:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485cec:	ba b0 21 47 00       	mov    edx,0x4721b0
  485cf1:	8d 88 8c 0e 00 00    	lea    ecx,[eax+0xe8c]
  485cf7:	ff d6                	call   esi
  485cf9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485cff:	c7 81 90 0e 00 00 00 	mov    DWORD PTR [ecx+0xe90],0x45bb8000
  485d06:	80 bb 45 
  485d09:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485d0f:	c7 82 94 0e 00 00 00 	mov    DWORD PTR [edx+0xe94],0x43fa0000
  485d16:	00 fa 43 
  485d19:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485d1e:	c7 80 98 0e 00 00 00 	mov    DWORD PTR [eax+0xe98],0x451c4000
  485d25:	40 1c 45 
  485d28:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485d2e:	c7 81 9c 0e 00 00 00 	mov    DWORD PTR [ecx+0xe9c],0x45cb2000
  485d35:	20 cb 45 
  485d38:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485d3e:	c7 82 a0 0e 00 00 00 	mov    DWORD PTR [edx+0xea0],0x4684d000
  485d45:	d0 84 46 
  485d48:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485d4d:	c7 80 a4 0e 00 00 00 	mov    DWORD PTR [eax+0xea4],0x46a41000
  485d54:	10 a4 46 
  485d57:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485d5d:	c7 81 a8 0e 00 00 00 	mov    DWORD PTR [ecx+0xea8],0x46bb8000
  485d64:	80 bb 46 
  485d67:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485d6d:	89 ba ac 0e 00 00    	mov    DWORD PTR [edx+0xeac],edi
  485d73:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485d78:	89 b8 b0 0e 00 00    	mov    DWORD PTR [eax+0xeb0],edi
  485d7e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485d84:	b8 00 00 22 44       	mov    eax,0x44220000
  485d89:	c7 81 b4 0e 00 00 00 	mov    DWORD PTR [ecx+0xeb4],0x44180000
  485d90:	00 18 44 
  485d93:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485d99:	89 aa b8 0e 00 00    	mov    DWORD PTR [edx+0xeb8],ebp
  485d9f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485da5:	89 81 bc 0e 00 00    	mov    DWORD PTR [ecx+0xebc],eax
  485dab:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485db1:	89 9a c0 0e 00 00    	mov    DWORD PTR [edx+0xec0],ebx
  485db7:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485dbd:	c7 81 c4 0e 00 00 00 	mov    DWORD PTR [ecx+0xec4],0x44170000
  485dc4:	00 17 44 
  485dc7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485dcd:	89 82 c8 0e 00 00    	mov    DWORD PTR [edx+0xec8],eax
  485dd3:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485dd8:	c7 80 cc 0e 00 00 00 	mov    DWORD PTR [eax+0xecc],0x437c0000
  485ddf:	00 7c 43 
  485de2:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485de8:	b8 00 00 64 43       	mov    eax,0x43640000
  485ded:	c7 81 d0 0e 00 00 00 	mov    DWORD PTR [ecx+0xed0],0x43700000
  485df4:	00 70 43 
  485df7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485dfd:	89 82 d4 0e 00 00    	mov    DWORD PTR [edx+0xed4],eax
  485e03:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485e09:	c7 81 d8 0e 00 00 00 	mov    DWORD PTR [ecx+0xed8],0x43500000
  485e10:	00 50 43 
  485e13:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485e19:	89 82 dc 0e 00 00    	mov    DWORD PTR [edx+0xedc],eax
  485e1f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485e24:	ba 74 26 47 00       	mov    edx,0x472674
  485e29:	c7 80 e0 0e 00 00 00 	mov    DWORD PTR [eax+0xee0],0x434c0000
  485e30:	00 4c 43 
  485e33:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485e39:	c7 81 e8 0e 00 00 00 	mov    DWORD PTR [ecx+0xee8],0x453b8000
  485e40:	80 3b 45 
  485e43:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485e48:	8d 88 f0 0e 00 00    	lea    ecx,[eax+0xef0]
  485e4e:	ff d6                	call   esi
  485e50:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485e56:	ba a8 13 47 00       	mov    edx,0x4713a8
  485e5b:	66 c7 81 f4 0e 00 00 	mov    WORD PTR [ecx+0xef4],0x21
  485e62:	21 00 
  485e64:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485e69:	8d 88 f8 0e 00 00    	lea    ecx,[eax+0xef8]
  485e6f:	ff d6                	call   esi
  485e71:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485e77:	ba 54 26 47 00       	mov    edx,0x472654
  485e7c:	81 c1 fc 0e 00 00    	add    ecx,0xefc
  485e82:	ff d6                	call   esi
  485e84:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485e89:	ba 68 22 47 00       	mov    edx,0x472268
  485e8e:	8d 88 00 0f 00 00    	lea    ecx,[eax+0xf00]
  485e94:	ff d6                	call   esi
  485e96:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485e9c:	c7 81 04 0f 00 00 00 	mov    DWORD PTR [ecx+0xf04],0x45bb8000
  485ea3:	80 bb 45 
  485ea6:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485eac:	c7 82 08 0f 00 00 00 	mov    DWORD PTR [edx+0xf08],0x43e10000
  485eb3:	00 e1 43 
  485eb6:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485ebb:	c7 80 0c 0f 00 00 00 	mov    DWORD PTR [eax+0xf0c],0x45160000
  485ec2:	00 16 45 
  485ec5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485ecb:	c7 81 10 0f 00 00 00 	mov    DWORD PTR [ecx+0xf10],0x45d48000
  485ed2:	80 d4 45 
  485ed5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485edb:	c7 82 14 0f 00 00 00 	mov    DWORD PTR [edx+0xf14],0x467a0000
  485ee2:	00 7a 46 
  485ee5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485eea:	c7 80 18 0f 00 00 00 	mov    DWORD PTR [eax+0xf18],0x46985800
  485ef1:	58 98 46 
  485ef4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485efa:	c7 81 1c 0f 00 00 00 	mov    DWORD PTR [ecx+0xf1c],0x46b3b000
  485f01:	b0 b3 46 
  485f04:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485f0a:	89 ba 20 0f 00 00    	mov    DWORD PTR [edx+0xf20],edi
  485f10:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485f15:	89 b8 24 0f 00 00    	mov    DWORD PTR [eax+0xf24],edi
  485f1b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485f21:	89 a9 28 0f 00 00    	mov    DWORD PTR [ecx+0xf28],ebp
  485f27:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485f2d:	c7 82 2c 0f 00 00 00 	mov    DWORD PTR [edx+0xf2c],0x44230000
  485f34:	00 23 44 
  485f37:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485f3c:	89 98 30 0f 00 00    	mov    DWORD PTR [eax+0xf30],ebx
  485f42:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485f48:	c7 81 34 0f 00 00 00 	mov    DWORD PTR [ecx+0xf34],0x442e0000
  485f4f:	00 2e 44 
  485f52:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485f58:	89 aa 38 0f 00 00    	mov    DWORD PTR [edx+0xf38],ebp
  485f5e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485f63:	c7 80 3c 0f 00 00 00 	mov    DWORD PTR [eax+0xf3c],0x44270000
  485f6a:	00 27 44 
  485f6d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485f73:	c7 81 40 0f 00 00 00 	mov    DWORD PTR [ecx+0xf40],0x43900000
  485f7a:	00 90 43 
  485f7d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485f83:	c7 82 44 0f 00 00 00 	mov    DWORD PTR [edx+0xf44],0x438a0000
  485f8a:	00 8a 43 
  485f8d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485f92:	c7 80 48 0f 00 00 00 	mov    DWORD PTR [eax+0xf48],0x43840000
  485f99:	00 84 43 
  485f9c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485fa2:	c7 81 4c 0f 00 00 00 	mov    DWORD PTR [ecx+0xf4c],0x43780000
  485fa9:	00 78 43 
  485fac:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  485fb2:	c7 82 50 0f 00 00 00 	mov    DWORD PTR [edx+0xf50],0x43860000
  485fb9:	00 86 43 
  485fbc:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485fc1:	ba 84 26 47 00       	mov    edx,0x472684
  485fc6:	c7 80 54 0f 00 00 00 	mov    DWORD PTR [eax+0xf54],0x43740000
  485fcd:	00 74 43 
  485fd0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485fd6:	c7 81 5c 0f 00 00 00 	mov    DWORD PTR [ecx+0xf5c],0x453b8000
  485fdd:	80 3b 45 
  485fe0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  485fe5:	8d 88 64 0f 00 00    	lea    ecx,[eax+0xf64]
  485feb:	ff d6                	call   esi
  485fed:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  485ff3:	ba a8 13 47 00       	mov    edx,0x4713a8
  485ff8:	66 c7 81 68 0f 00 00 	mov    WORD PTR [ecx+0xf68],0x22
  485fff:	22 00 
  486001:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486006:	8d 88 6c 0f 00 00    	lea    ecx,[eax+0xf6c]
  48600c:	ff d6                	call   esi
  48600e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486014:	ba 54 26 47 00       	mov    edx,0x472654
  486019:	81 c1 70 0f 00 00    	add    ecx,0xf70
  48601f:	ff d6                	call   esi
  486021:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486026:	ba 90 22 47 00       	mov    edx,0x472290
  48602b:	8d 88 74 0f 00 00    	lea    ecx,[eax+0xf74]
  486031:	ff d6                	call   esi
  486033:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486039:	c7 81 78 0f 00 00 00 	mov    DWORD PTR [ecx+0xf78],0x45c80000
  486040:	00 c8 45 
  486043:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486049:	c7 82 7c 0f 00 00 00 	mov    DWORD PTR [edx+0xf7c],0x44098000
  486050:	80 09 44 
  486053:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486058:	c7 80 80 0f 00 00 00 	mov    DWORD PTR [eax+0xf80],0x45322000
  48605f:	20 32 45 
  486062:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486068:	c7 81 84 0f 00 00 00 	mov    DWORD PTR [ecx+0xf84],0x4604d000
  48606f:	d0 04 46 
  486072:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486078:	c7 82 88 0f 00 00 00 	mov    DWORD PTR [edx+0xf88],0x46947000
  48607f:	70 94 46 
  486082:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486087:	c7 80 8c 0f 00 00 00 	mov    DWORD PTR [eax+0xf8c],0x46b3b000
  48608e:	b0 b3 46 
  486091:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486097:	c7 81 90 0f 00 00 00 	mov    DWORD PTR [ecx+0xf90],0x46d2f000
  48609e:	f0 d2 46 
  4860a1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4860a7:	89 ba 94 0f 00 00    	mov    DWORD PTR [edx+0xf94],edi
  4860ad:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4860b2:	89 b8 98 0f 00 00    	mov    DWORD PTR [eax+0xf98],edi
  4860b8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4860be:	b8 00 00 2d 44       	mov    eax,0x442d0000
  4860c3:	c7 81 9c 0f 00 00 00 	mov    DWORD PTR [ecx+0xf9c],0x44230000
  4860ca:	00 23 44 
  4860cd:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4860d3:	89 9a a0 0f 00 00    	mov    DWORD PTR [edx+0xfa0],ebx
  4860d9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4860df:	89 81 a4 0f 00 00    	mov    DWORD PTR [ecx+0xfa4],eax
  4860e5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4860eb:	c7 82 a8 0f 00 00 00 	mov    DWORD PTR [edx+0xfa8],0x44328000
  4860f2:	80 32 44 
  4860f5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4860fb:	c7 81 ac 0f 00 00 00 	mov    DWORD PTR [ecx+0xfac],0x44270000
  486102:	00 27 44 
  486105:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48610b:	89 82 b0 0f 00 00    	mov    DWORD PTR [edx+0xfb0],eax
  486111:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486116:	c7 80 b4 0f 00 00 00 	mov    DWORD PTR [eax+0xfb4],0x43a40000
  48611d:	00 a4 43 
  486120:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486126:	b8 00 00 8e 43       	mov    eax,0x438e0000
  48612b:	c7 81 b8 0f 00 00 00 	mov    DWORD PTR [ecx+0xfb8],0x43a00000
  486132:	00 a0 43 
  486135:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48613b:	c7 82 bc 0f 00 00 00 	mov    DWORD PTR [edx+0xfbc],0x439a0000
  486142:	00 9a 43 
  486145:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48614b:	89 81 c0 0f 00 00    	mov    DWORD PTR [ecx+0xfc0],eax
  486151:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486157:	c7 82 c4 0f 00 00 00 	mov    DWORD PTR [edx+0xfc4],0x43960000
  48615e:	00 96 43 
  486161:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486167:	89 81 c8 0f 00 00    	mov    DWORD PTR [ecx+0xfc8],eax
  48616d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486173:	c7 82 d0 0f 00 00 00 	mov    DWORD PTR [edx+0xfd0],0x45480000
  48617a:	00 48 45 
  48617d:	ba 94 26 47 00       	mov    edx,0x472694
  486182:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486187:	8d 88 d8 0f 00 00    	lea    ecx,[eax+0xfd8]
  48618d:	ff d6                	call   esi
  48618f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486195:	ba 8c 14 47 00       	mov    edx,0x47148c
  48619a:	66 c7 81 dc 0f 00 00 	mov    WORD PTR [ecx+0xfdc],0x23
  4861a1:	23 00 
  4861a3:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4861a8:	8d 88 e0 0f 00 00    	lea    ecx,[eax+0xfe0]
  4861ae:	ff d6                	call   esi
  4861b0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4861b6:	ba a4 26 47 00       	mov    edx,0x4726a4
  4861bb:	81 c1 e4 0f 00 00    	add    ecx,0xfe4
  4861c1:	ff d6                	call   esi
  4861c3:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4861c9:	b8 00 00 31 44       	mov    eax,0x44310000
  4861ce:	c7 82 10 10 00 00 00 	mov    DWORD PTR [edx+0x1010],0x442b0000
  4861d5:	00 2b 44 
  4861d8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4861de:	89 81 14 10 00 00    	mov    DWORD PTR [ecx+0x1014],eax
  4861e4:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4861ea:	c7 82 18 10 00 00 00 	mov    DWORD PTR [edx+0x1018],0x44370000
  4861f1:	00 37 44 
  4861f4:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4861fa:	c7 81 1c 10 00 00 00 	mov    DWORD PTR [ecx+0x101c],0x443b0000
  486201:	00 3b 44 
  486204:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48620a:	89 82 20 10 00 00    	mov    DWORD PTR [edx+0x1020],eax
  486210:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486215:	c7 80 24 10 00 00 00 	mov    DWORD PTR [eax+0x1024],0x44380000
  48621c:	00 38 44 
  48621f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486225:	c7 81 28 10 00 00 00 	mov    DWORD PTR [ecx+0x1028],0x43ae0000
  48622c:	00 ae 43 
  48622f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486235:	c7 82 2c 10 00 00 00 	mov    DWORD PTR [edx+0x102c],0x43b40000
  48623c:	00 b4 43 
  48623f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486244:	c7 80 30 10 00 00 00 	mov    DWORD PTR [eax+0x1030],0x43bc0000
  48624b:	00 bc 43 
  48624e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486254:	c7 81 34 10 00 00 00 	mov    DWORD PTR [ecx+0x1034],0x43ac0000
  48625b:	00 ac 43 
  48625e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486264:	c7 82 38 10 00 00 00 	mov    DWORD PTR [edx+0x1038],0x43a60000
  48626b:	00 a6 43 
  48626e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486273:	ba 84 14 47 00       	mov    edx,0x471484
  486278:	c7 80 3c 10 00 00 00 	mov    DWORD PTR [eax+0x103c],0x439e0000
  48627f:	00 9e 43 
  486282:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486288:	66 c7 81 50 10 00 00 	mov    WORD PTR [ecx+0x1050],0x24
  48628f:	24 00 
  486291:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486296:	8d 88 54 10 00 00    	lea    ecx,[eax+0x1054]
  48629c:	ff d6                	call   esi
  48629e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4862a4:	ba 34 24 47 00       	mov    edx,0x472434
  4862a9:	81 c1 58 10 00 00    	add    ecx,0x1058
  4862af:	ff d6                	call   esi
  4862b1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4862b7:	c7 82 84 10 00 00 00 	mov    DWORD PTR [edx+0x1084],0x44230000
  4862be:	00 23 44 
  4862c1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4862c6:	c7 80 88 10 00 00 00 	mov    DWORD PTR [eax+0x1088],0x44290000
  4862cd:	00 29 44 
  4862d0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4862d6:	c7 81 8c 10 00 00 00 	mov    DWORD PTR [ecx+0x108c],0x442e0000
  4862dd:	00 2e 44 
  4862e0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4862e6:	c7 82 90 10 00 00 00 	mov    DWORD PTR [edx+0x1090],0x44340000
  4862ed:	00 34 44 
  4862f0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4862f5:	89 98 94 10 00 00    	mov    DWORD PTR [eax+0x1094],ebx
  4862fb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486301:	c7 81 98 10 00 00 00 	mov    DWORD PTR [ecx+0x1098],0x442f0000
  486308:	00 2f 44 
  48630b:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486311:	c7 82 9c 10 00 00 00 	mov    DWORD PTR [edx+0x109c],0x43c00000
  486318:	00 c0 43 
  48631b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486320:	c7 80 a0 10 00 00 00 	mov    DWORD PTR [eax+0x10a0],0x43c60000
  486327:	00 c6 43 
  48632a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486330:	c7 81 a4 10 00 00 00 	mov    DWORD PTR [ecx+0x10a4],0x43ce0000
  486337:	00 ce 43 
  48633a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486340:	c7 82 a8 10 00 00 00 	mov    DWORD PTR [edx+0x10a8],0x43d00000
  486347:	00 d0 43 
  48634a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48634f:	c7 80 ac 10 00 00 00 	mov    DWORD PTR [eax+0x10ac],0x43bc0000
  486356:	00 bc 43 
  486359:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48635f:	c7 81 b0 10 00 00 00 	mov    DWORD PTR [ecx+0x10b0],0x43c40000
  486366:	00 c4 43 
  486369:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48636f:	66 c7 82 c4 10 00 00 	mov    WORD PTR [edx+0x10c4],0x25
  486376:	25 00 
  486378:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48637d:	ba a8 13 47 00       	mov    edx,0x4713a8
  486382:	8d 88 c8 10 00 00    	lea    ecx,[eax+0x10c8]
  486388:	ff d6                	call   esi
  48638a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486390:	ba c4 26 47 00       	mov    edx,0x4726c4
  486395:	81 c1 cc 10 00 00    	add    ecx,0x10cc
  48639b:	ff d6                	call   esi
  48639d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4863a2:	ba b0 21 47 00       	mov    edx,0x4721b0
  4863a7:	8d 88 d0 10 00 00    	lea    ecx,[eax+0x10d0]
  4863ad:	ff d6                	call   esi
  4863af:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4863b5:	c7 81 d4 10 00 00 00 	mov    DWORD PTR [ecx+0x10d4],0x45dac000
  4863bc:	c0 da 45 
  4863bf:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4863c5:	c7 82 d8 10 00 00 00 	mov    DWORD PTR [edx+0x10d8],0x44228000
  4863cc:	80 22 44 
  4863cf:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4863d4:	c7 80 dc 10 00 00 00 	mov    DWORD PTR [eax+0x10dc],0x454e4000
  4863db:	40 4e 45 
  4863de:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4863e4:	c7 81 e0 10 00 00 00 	mov    DWORD PTR [ecx+0x10e0],0x46147000
  4863eb:	70 14 46 
  4863ee:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4863f4:	c7 82 e4 10 00 00 00 	mov    DWORD PTR [edx+0x10e4],0x46abe000
  4863fb:	e0 ab 46 
  4863fe:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486403:	c7 80 e8 10 00 00 00 	mov    DWORD PTR [eax+0x10e8],0x46c35000
  48640a:	50 c3 46 
  48640d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486413:	c7 81 ec 10 00 00 00 	mov    DWORD PTR [ecx+0x10ec],0x46ea6000
  48641a:	60 ea 46 
  48641d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486423:	89 ba f0 10 00 00    	mov    DWORD PTR [edx+0x10f0],edi
  486429:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48642e:	89 b8 f4 10 00 00    	mov    DWORD PTR [eax+0x10f4],edi
  486434:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48643a:	b8 00 00 23 44       	mov    eax,0x44230000
  48643f:	c7 81 f8 10 00 00 00 	mov    DWORD PTR [ecx+0x10f8],0x441e0000
  486446:	00 1e 44 
  486449:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48644f:	89 82 fc 10 00 00    	mov    DWORD PTR [edx+0x10fc],eax
  486455:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48645b:	89 99 00 11 00 00    	mov    DWORD PTR [ecx+0x1100],ebx
  486461:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486467:	bb 00 c0 5a 45       	mov    ebx,0x455ac000
  48646c:	c7 82 04 11 00 00 00 	mov    DWORD PTR [edx+0x1104],0x442e0000
  486473:	00 2e 44 
  486476:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48647c:	89 81 08 11 00 00    	mov    DWORD PTR [ecx+0x1108],eax
  486482:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486488:	c7 82 0c 11 00 00 00 	mov    DWORD PTR [edx+0x110c],0x44290000
  48648f:	00 29 44 
  486492:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486497:	c7 80 10 11 00 00 00 	mov    DWORD PTR [eax+0x1110],0x43d20000
  48649e:	00 d2 43 
  4864a1:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4864a7:	c7 81 14 11 00 00 00 	mov    DWORD PTR [ecx+0x1114],0x43d80000
  4864ae:	00 d8 43 
  4864b1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4864b7:	c7 82 18 11 00 00 00 	mov    DWORD PTR [edx+0x1118],0x43e00000
  4864be:	00 e0 43 
  4864c1:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4864c6:	c7 80 1c 11 00 00 00 	mov    DWORD PTR [eax+0x111c],0x43e60000
  4864cd:	00 e6 43 
  4864d0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4864d6:	c7 81 20 11 00 00 00 	mov    DWORD PTR [ecx+0x1120],0x43ce0000
  4864dd:	00 ce 43 
  4864e0:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4864e6:	c7 82 24 11 00 00 00 	mov    DWORD PTR [edx+0x1124],0x43d60000
  4864ed:	00 d6 43 
  4864f0:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4864f5:	ba f0 26 47 00       	mov    edx,0x4726f0
  4864fa:	89 98 2c 11 00 00    	mov    DWORD PTR [eax+0x112c],ebx
  486500:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486506:	81 c1 34 11 00 00    	add    ecx,0x1134
  48650c:	ff d6                	call   esi
  48650e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486514:	66 c7 82 38 11 00 00 	mov    WORD PTR [edx+0x1138],0x26
  48651b:	26 00 
  48651d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486522:	ba 7c 14 47 00       	mov    edx,0x47147c
  486527:	8d 88 3c 11 00 00    	lea    ecx,[eax+0x113c]
  48652d:	ff d6                	call   esi
  48652f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486535:	ba 9c 23 47 00       	mov    edx,0x47239c
  48653a:	81 c1 40 11 00 00    	add    ecx,0x1140
  486540:	ff d6                	call   esi
  486542:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486548:	c7 82 6c 11 00 00 00 	mov    DWORD PTR [edx+0x116c],0x44180000
  48654f:	00 18 44 
  486552:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486557:	89 a8 70 11 00 00    	mov    DWORD PTR [eax+0x1170],ebp
  48655d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486563:	c7 81 74 11 00 00 00 	mov    DWORD PTR [ecx+0x1174],0x44220000
  48656a:	00 22 44 
  48656d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486573:	c7 82 78 11 00 00 00 	mov    DWORD PTR [edx+0x1178],0x44270000
  48657a:	00 27 44 
  48657d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486582:	c7 80 7c 11 00 00 00 	mov    DWORD PTR [eax+0x117c],0x441e0000
  486589:	00 1e 44 
  48658c:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486592:	c7 81 80 11 00 00 00 	mov    DWORD PTR [ecx+0x1180],0x44240000
  486599:	00 24 44 
  48659c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4865a2:	c7 82 84 11 00 00 00 	mov    DWORD PTR [edx+0x1184],0x43e60000
  4865a9:	00 e6 43 
  4865ac:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4865b1:	c7 80 88 11 00 00 00 	mov    DWORD PTR [eax+0x1188],0x43ee0000
  4865b8:	00 ee 43 
  4865bb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4865c1:	c7 81 8c 11 00 00 00 	mov    DWORD PTR [ecx+0x118c],0x43f40000
  4865c8:	00 f4 43 
  4865cb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4865d1:	c7 82 90 11 00 00 00 	mov    DWORD PTR [edx+0x1190],0x43fa0000
  4865d8:	00 fa 43 
  4865db:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4865e0:	c7 80 94 11 00 00 00 	mov    DWORD PTR [eax+0x1194],0x43e20000
  4865e7:	00 e2 43 
  4865ea:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4865f0:	c7 81 98 11 00 00 00 	mov    DWORD PTR [ecx+0x1198],0x43e80000
  4865f7:	00 e8 43 
  4865fa:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486600:	66 c7 82 ac 11 00 00 	mov    WORD PTR [edx+0x11ac],0x27
  486607:	27 00 
  486609:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48660e:	ba a8 13 47 00       	mov    edx,0x4713a8
  486613:	8d 88 b0 11 00 00    	lea    ecx,[eax+0x11b0]
  486619:	ff d6                	call   esi
  48661b:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486621:	ba c4 26 47 00       	mov    edx,0x4726c4
  486626:	81 c1 b4 11 00 00    	add    ecx,0x11b4
  48662c:	ff d6                	call   esi
  48662e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486633:	ba 68 22 47 00       	mov    edx,0x472268
  486638:	8d 88 b8 11 00 00    	lea    ecx,[eax+0x11b8]
  48663e:	ff d6                	call   esi
  486640:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486646:	c7 81 bc 11 00 00 00 	mov    DWORD PTR [ecx+0x11bc],0x45dac000
  48664d:	c0 da 45 
  486650:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486656:	c7 82 c0 11 00 00 00 	mov    DWORD PTR [edx+0x11c0],0x44228000
  48665d:	80 22 44 
  486660:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486665:	c7 80 c4 11 00 00 00 	mov    DWORD PTR [eax+0x11c4],0x454e4000
  48666c:	40 4e 45 
  48666f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486675:	c7 81 c8 11 00 00 00 	mov    DWORD PTR [ecx+0x11c8],0x46147000
  48667c:	70 14 46 
  48667f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486685:	c7 82 cc 11 00 00 00 	mov    DWORD PTR [edx+0x11cc],0x46abe000
  48668c:	e0 ab 46 
  48668f:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486694:	c7 80 d0 11 00 00 00 	mov    DWORD PTR [eax+0x11d0],0x46c35000
  48669b:	50 c3 46 
  48669e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4866a4:	c7 81 d4 11 00 00 00 	mov    DWORD PTR [ecx+0x11d4],0x46ea6000
  4866ab:	60 ea 46 
  4866ae:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4866b4:	89 ba d8 11 00 00    	mov    DWORD PTR [edx+0x11d8],edi
  4866ba:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4866bf:	89 b8 dc 11 00 00    	mov    DWORD PTR [eax+0x11dc],edi
  4866c5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4866cb:	b8 00 00 18 44       	mov    eax,0x44180000
  4866d0:	c7 81 e0 11 00 00 00 	mov    DWORD PTR [ecx+0x11e0],0x44130000
  4866d7:	00 13 44 
  4866da:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4866e0:	b9 00 00 1e 44       	mov    ecx,0x441e0000
  4866e5:	89 82 e4 11 00 00    	mov    DWORD PTR [edx+0x11e4],eax
  4866eb:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4866f1:	89 8a e8 11 00 00    	mov    DWORD PTR [edx+0x11e8],ecx
  4866f7:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4866fd:	c7 82 ec 11 00 00 00 	mov    DWORD PTR [edx+0x11ec],0x44230000
  486704:	00 23 44 
  486707:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48670d:	89 82 f0 11 00 00    	mov    DWORD PTR [edx+0x11f0],eax
  486713:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486718:	89 88 f4 11 00 00    	mov    DWORD PTR [eax+0x11f4],ecx
  48671e:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486724:	c7 81 f8 11 00 00 00 	mov    DWORD PTR [ecx+0x11f8],0x43fa0000
  48672b:	00 fa 43 
  48672e:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486734:	c7 82 fc 11 00 00 00 	mov    DWORD PTR [edx+0x11fc],0x44010000
  48673b:	00 01 44 
  48673e:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486743:	c7 80 00 12 00 00 00 	mov    DWORD PTR [eax+0x1200],0x44040000
  48674a:	00 04 44 
  48674d:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486753:	c7 81 04 12 00 00 00 	mov    DWORD PTR [ecx+0x1204],0x44070000
  48675a:	00 07 44 
  48675d:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486763:	c7 82 08 12 00 00 00 	mov    DWORD PTR [edx+0x1208],0x43f60000
  48676a:	00 f6 43 
  48676d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486772:	ba 00 27 47 00       	mov    edx,0x472700
  486777:	c7 80 0c 12 00 00 00 	mov    DWORD PTR [eax+0x120c],0x43fe0000
  48677e:	00 fe 43 
  486781:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486787:	89 99 14 12 00 00    	mov    DWORD PTR [ecx+0x1214],ebx
  48678d:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486792:	8d 88 1c 12 00 00    	lea    ecx,[eax+0x121c]
  486798:	ff d6                	call   esi
  48679a:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4867a0:	ba a8 13 47 00       	mov    edx,0x4713a8
  4867a5:	66 c7 81 20 12 00 00 	mov    WORD PTR [ecx+0x1220],0x28
  4867ac:	28 00 
  4867ae:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4867b3:	8d 88 24 12 00 00    	lea    ecx,[eax+0x1224]
  4867b9:	ff d6                	call   esi
  4867bb:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4867c1:	ba c4 26 47 00       	mov    edx,0x4726c4
  4867c6:	81 c1 28 12 00 00    	add    ecx,0x1228
  4867cc:	ff d6                	call   esi
  4867ce:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4867d3:	ba 90 22 47 00       	mov    edx,0x472290
  4867d8:	8d 88 2c 12 00 00    	lea    ecx,[eax+0x122c]
  4867de:	ff d6                	call   esi
  4867e0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4867e6:	bb 00 00 12 44       	mov    ebx,0x44120000
  4867eb:	c7 81 30 12 00 00 00 	mov    DWORD PTR [ecx+0x1230],0x45e74000
  4867f2:	40 e7 45 
  4867f5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4867fb:	89 ba 34 12 00 00    	mov    DWORD PTR [edx+0x1234],edi
  486801:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486806:	c7 80 38 12 00 00 00 	mov    DWORD PTR [eax+0x1238],0x457a0000
  48680d:	00 7a 45 
  486810:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486816:	c7 81 3c 12 00 00 00 	mov    DWORD PTR [ecx+0x123c],0x463b8000
  48681d:	80 3b 46 
  486820:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486826:	c7 82 40 12 00 00 00 	mov    DWORD PTR [edx+0x1240],0x46cb2000
  48682d:	20 cb 46 
  486830:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486835:	c7 80 44 12 00 00 00 	mov    DWORD PTR [eax+0x1244],0x46f23000
  48683c:	30 f2 46 
  48683f:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486845:	c7 81 48 12 00 00 00 	mov    DWORD PTR [ecx+0x1248],0x470ca000
  48684c:	a0 0c 47 
  48684f:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486855:	89 ba 4c 12 00 00    	mov    DWORD PTR [edx+0x124c],edi
  48685b:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486860:	89 b8 50 12 00 00    	mov    DWORD PTR [eax+0x1250],edi
  486866:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48686c:	b8 00 00 0d 44       	mov    eax,0x440d0000
  486871:	bf 00 00 17 44       	mov    edi,0x44170000
  486876:	89 81 54 12 00 00    	mov    DWORD PTR [ecx+0x1254],eax
  48687c:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486882:	89 9a 58 12 00 00    	mov    DWORD PTR [edx+0x1258],ebx
  486888:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48688e:	89 b9 5c 12 00 00    	mov    DWORD PTR [ecx+0x125c],edi
  486894:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48689a:	89 aa 60 12 00 00    	mov    DWORD PTR [edx+0x1260],ebp
  4868a0:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4868a6:	89 99 64 12 00 00    	mov    DWORD PTR [ecx+0x1264],ebx
  4868ac:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4868b2:	89 aa 68 12 00 00    	mov    DWORD PTR [edx+0x1268],ebp
  4868b8:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4868be:	bd 00 00 07 44       	mov    ebp,0x44070000
  4868c3:	89 a9 6c 12 00 00    	mov    DWORD PTR [ecx+0x126c],ebp
  4868c9:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4868cf:	c7 82 70 12 00 00 00 	mov    DWORD PTR [edx+0x1270],0x440a0000
  4868d6:	00 0a 44 
  4868d9:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4868df:	89 81 74 12 00 00    	mov    DWORD PTR [ecx+0x1274],eax
  4868e5:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4868eb:	c7 82 78 12 00 00 00 	mov    DWORD PTR [edx+0x1278],0x44100000
  4868f2:	00 10 44 
  4868f5:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4868fa:	c7 80 7c 12 00 00 00 	mov    DWORD PTR [eax+0x127c],0x44040000
  486901:	00 04 44 
  486904:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48690a:	c7 81 80 12 00 00 00 	mov    DWORD PTR [ecx+0x1280],0x440b0000
  486911:	00 0b 44 
  486914:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  48691a:	c7 82 88 12 00 00 00 	mov    DWORD PTR [edx+0x1288],0x45674000
  486921:	40 67 45 
  486924:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486929:	ba 10 27 47 00       	mov    edx,0x472710
  48692e:	8d 88 90 12 00 00    	lea    ecx,[eax+0x1290]
  486934:	ff d6                	call   esi
  486936:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48693c:	ba 8c 14 47 00       	mov    edx,0x47148c
  486941:	66 c7 81 94 12 00 00 	mov    WORD PTR [ecx+0x1294],0x29
  486948:	29 00 
  48694a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48694f:	8d 88 98 12 00 00    	lea    ecx,[eax+0x1298]
  486955:	ff d6                	call   esi
  486957:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48695d:	ba 20 27 47 00       	mov    edx,0x472720
  486962:	81 c1 9c 12 00 00    	add    ecx,0x129c
  486968:	ff d6                	call   esi
  48696a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  486970:	c7 82 a4 12 00 00 00 	mov    DWORD PTR [edx+0x12a4],0x44fa0000
  486977:	00 fa 44 
  48697a:	a1 34 10 49 00       	mov    eax,ds:0x491034
  48697f:	89 a8 c8 12 00 00    	mov    DWORD PTR [eax+0x12c8],ebp
  486985:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  48698b:	b8 00 00 11 44       	mov    eax,0x44110000
  486990:	c7 81 cc 12 00 00 00 	mov    DWORD PTR [ecx+0x12cc],0x440c0000
  486997:	00 0c 44 
  48699a:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4869a0:	89 82 d0 12 00 00    	mov    DWORD PTR [edx+0x12d0],eax
  4869a6:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4869ac:	89 b9 d4 12 00 00    	mov    DWORD PTR [ecx+0x12d4],edi
  4869b2:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4869b8:	89 82 d8 12 00 00    	mov    DWORD PTR [edx+0x12d8],eax
  4869be:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4869c4:	89 b9 dc 12 00 00    	mov    DWORD PTR [ecx+0x12dc],edi
  4869ca:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4869d0:	89 82 e0 12 00 00    	mov    DWORD PTR [edx+0x12e0],eax
  4869d6:	a1 34 10 49 00       	mov    eax,ds:0x491034
  4869db:	c7 80 e4 12 00 00 00 	mov    DWORD PTR [eax+0x12e4],0x44140000
  4869e2:	00 14 44 
  4869e5:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  4869eb:	89 b9 e8 12 00 00    	mov    DWORD PTR [ecx+0x12e8],edi
  4869f1:	8b 15 34 10 49 00    	mov    edx,DWORD PTR ds:0x491034
  4869f7:	c7 82 ec 12 00 00 00 	mov    DWORD PTR [edx+0x12ec],0x441a0000
  4869fe:	00 1a 44 
  486a01:	a1 34 10 49 00       	mov    eax,ds:0x491034
  486a06:	ba 50 27 47 00       	mov    edx,0x472750
  486a0b:	89 98 f0 12 00 00    	mov    DWORD PTR [eax+0x12f0],ebx
  486a11:	8b 0d 34 10 49 00    	mov    ecx,DWORD PTR ds:0x491034
  486a17:	c7 81 f4 12 00 00 00 	mov    DWORD PTR [ecx+0x12f4],0x44150000
  486a1e:	00 15 44 
  486a21:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486a27:	ff d6                	call   esi
  486a29:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486a2e:	ba 90 27 47 00       	mov    edx,0x472790
  486a33:	8d 48 04             	lea    ecx,[eax+0x4]
  486a36:	ff d6                	call   esi
  486a38:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486a3e:	ba 14 28 47 00       	mov    edx,0x472814
  486a43:	83 c1 08             	add    ecx,0x8
  486a46:	ff d6                	call   esi
  486a48:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486a4d:	ba 5c 28 47 00       	mov    edx,0x47285c
  486a52:	8d 48 0c             	lea    ecx,[eax+0xc]
  486a55:	ff d6                	call   esi
  486a57:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486a5d:	ba a8 28 47 00       	mov    edx,0x4728a8
  486a62:	83 c1 10             	add    ecx,0x10
  486a65:	ff d6                	call   esi
  486a67:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486a6c:	ba 74 29 47 00       	mov    edx,0x472974
  486a71:	8d 48 14             	lea    ecx,[eax+0x14]
  486a74:	ff d6                	call   esi
  486a76:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486a7c:	ba 4c 2a 47 00       	mov    edx,0x472a4c
  486a81:	83 c1 18             	add    ecx,0x18
  486a84:	ff d6                	call   esi
  486a86:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486a8b:	ba 98 2a 47 00       	mov    edx,0x472a98
  486a90:	8d 48 1c             	lea    ecx,[eax+0x1c]
  486a93:	ff d6                	call   esi
  486a95:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486a9b:	ba e0 2a 47 00       	mov    edx,0x472ae0
  486aa0:	83 c1 20             	add    ecx,0x20
  486aa3:	ff d6                	call   esi
  486aa5:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486aaa:	ba 54 2b 47 00       	mov    edx,0x472b54
  486aaf:	8d 48 24             	lea    ecx,[eax+0x24]
  486ab2:	ff d6                	call   esi
  486ab4:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486aba:	ba 28 2c 47 00       	mov    edx,0x472c28
  486abf:	83 c1 28             	add    ecx,0x28
  486ac2:	ff d6                	call   esi
  486ac4:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486ac9:	ba b0 2c 47 00       	mov    edx,0x472cb0
  486ace:	8d 48 2c             	lea    ecx,[eax+0x2c]
  486ad1:	ff d6                	call   esi
  486ad3:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486ad9:	ba e8 2c 47 00       	mov    edx,0x472ce8
  486ade:	83 c1 30             	add    ecx,0x30
  486ae1:	ff d6                	call   esi
  486ae3:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486ae8:	ba d8 28 47 00       	mov    edx,0x4728d8
  486aed:	8d 48 34             	lea    ecx,[eax+0x34]
  486af0:	ff d6                	call   esi
  486af2:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486af8:	ba 3c 2d 47 00       	mov    edx,0x472d3c
  486afd:	83 c1 38             	add    ecx,0x38
  486b00:	ff d6                	call   esi
  486b02:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486b07:	ba c4 2d 47 00       	mov    edx,0x472dc4
  486b0c:	8d 48 3c             	lea    ecx,[eax+0x3c]
  486b0f:	ff d6                	call   esi
  486b11:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486b17:	ba 70 2e 47 00       	mov    edx,0x472e70
  486b1c:	83 c1 40             	add    ecx,0x40
  486b1f:	ff d6                	call   esi
  486b21:	ba 70 2e 47 00       	mov    edx,0x472e70
  486b26:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486b2b:	8d 48 44             	lea    ecx,[eax+0x44]
  486b2e:	ff d6                	call   esi
  486b30:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486b36:	ba cc 2e 47 00       	mov    edx,0x472ecc
  486b3b:	83 c1 48             	add    ecx,0x48
  486b3e:	ff d6                	call   esi
  486b40:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486b45:	ba 28 2f 47 00       	mov    edx,0x472f28
  486b4a:	8d 48 4c             	lea    ecx,[eax+0x4c]
  486b4d:	ff d6                	call   esi
  486b4f:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486b55:	ba a0 2f 47 00       	mov    edx,0x472fa0
  486b5a:	83 c1 50             	add    ecx,0x50
  486b5d:	ff d6                	call   esi
  486b5f:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486b64:	ba e4 2f 47 00       	mov    edx,0x472fe4
  486b69:	8d 48 54             	lea    ecx,[eax+0x54]
  486b6c:	ff d6                	call   esi
  486b6e:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486b74:	ba 30 30 47 00       	mov    edx,0x473030
  486b79:	83 c1 58             	add    ecx,0x58
  486b7c:	ff d6                	call   esi
  486b7e:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486b83:	ba a0 30 47 00       	mov    edx,0x4730a0
  486b88:	8d 48 5c             	lea    ecx,[eax+0x5c]
  486b8b:	ff d6                	call   esi
  486b8d:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486b93:	ba 0c 31 47 00       	mov    edx,0x47310c
  486b98:	83 c1 60             	add    ecx,0x60
  486b9b:	ff d6                	call   esi
  486b9d:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486ba2:	ba b0 2c 47 00       	mov    edx,0x472cb0
  486ba7:	8d 48 64             	lea    ecx,[eax+0x64]
  486baa:	ff d6                	call   esi
  486bac:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486bb2:	ba 7c 31 47 00       	mov    edx,0x47317c
  486bb7:	83 c1 68             	add    ecx,0x68
  486bba:	ff d6                	call   esi
  486bbc:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486bc1:	ba 50 27 47 00       	mov    edx,0x472750
  486bc6:	8d 48 6c             	lea    ecx,[eax+0x6c]
  486bc9:	ff d6                	call   esi
  486bcb:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486bd1:	ba 28 32 47 00       	mov    edx,0x473228
  486bd6:	83 c1 70             	add    ecx,0x70
  486bd9:	ff d6                	call   esi
  486bdb:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486be0:	ba 74 32 47 00       	mov    edx,0x473274
  486be5:	8d 48 74             	lea    ecx,[eax+0x74]
  486be8:	ff d6                	call   esi
  486bea:	8b 0d 50 10 49 00    	mov    ecx,DWORD PTR ds:0x491050
  486bf0:	ba bc 32 47 00       	mov    edx,0x4732bc
  486bf5:	83 c1 78             	add    ecx,0x78
  486bf8:	ff d6                	call   esi
  486bfa:	a1 50 10 49 00       	mov    eax,ds:0x491050
  486bff:	ba f0 32 47 00       	mov    edx,0x4732f0
  486c04:	8d 48 7c             	lea    ecx,[eax+0x7c]
  486c07:	ff d6                	call   esi
  486c09:	5f                   	pop    edi
  486c0a:	5e                   	pop    esi
  486c0b:	5d                   	pop    ebp
  486c0c:	5b                   	pop    ebx
  486c0d:	c3                   	ret
